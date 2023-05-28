// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/TextWidgetTypes.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextWidgetTypes() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextFlowDirection();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextWrappingPolicy();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextShapingMethod();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShapedTextOptions;
class UScriptStruct* FShapedTextOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShapedTextOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShapedTextOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapedTextOptions, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("ShapedTextOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ShapedTextOptions.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FShapedTextOptions>()
{
	return FShapedTextOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShapedTextOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TextShapingMethod_MetaData[];
#endif
		static void NewProp_bOverride_TextShapingMethod_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TextShapingMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TextFlowDirection_MetaData[];
#endif
		static void NewProp_bOverride_TextFlowDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TextFlowDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextShapingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextShapingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextShapingMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextFlowDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextFlowDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextFlowDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapedTextOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Common data for all widgets that use shaped text.\n * Contains the common options that should be exposed for the underlying Slate widget.\n */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Common data for all widgets that use shaped text.\nContains the common options that should be exposed for the underlying Slate widget." },
	};
#endif
	void* Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapedTextOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_SetBit(void* Obj)
	{
		((FShapedTextOptions*)Obj)->bOverride_TextShapingMethod = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod = { "bOverride_TextShapingMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FShapedTextOptions), &Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_SetBit(void* Obj)
	{
		((FShapedTextOptions*)Obj)->bOverride_TextFlowDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection = { "bOverride_TextFlowDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FShapedTextOptions), &Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Which text shaping method should the text within this widget use? (unset to use the default returned by GetDefaultTextShapingMethod) */" },
		{ "EditCondition", "bOverride_TextShapingMethod" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Which text shaping method should the text within this widget use? (unset to use the default returned by GetDefaultTextShapingMethod)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod = { "TextShapingMethod", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShapedTextOptions, TextShapingMethod), Z_Construct_UEnum_SlateCore_ETextShapingMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_MetaData)) }; // 2909449771
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Which text flow direction should the text within this widget use? (unset to use the default returned by GetDefaultTextFlowDirection) */" },
		{ "EditCondition", "bOverride_TextFlowDirection" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Which text flow direction should the text within this widget use? (unset to use the default returned by GetDefaultTextFlowDirection)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection = { "TextFlowDirection", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShapedTextOptions, TextFlowDirection), Z_Construct_UEnum_Slate_ETextFlowDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_MetaData)) }; // 2449680632
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShapedTextOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"ShapedTextOptions",
		sizeof(FShapedTextOptions),
		alignof(FShapedTextOptions),
		Z_Construct_UScriptStruct_FShapedTextOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_ShapedTextOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShapedTextOptions.InnerSingleton, Z_Construct_UScriptStruct_FShapedTextOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShapedTextOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UTextLayoutWidget::execSetJustification)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InJustification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification));
		P_NATIVE_END;
	}
	void UTextLayoutWidget::StaticRegisterNativesUTextLayoutWidget()
	{
		UClass* Class = UTextLayoutWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetJustification", &UTextLayoutWidget::execSetJustification },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics
	{
		struct TextLayoutWidget_eventSetJustification_Parms
		{
			TEnumAsByte<ETextJustify::Type> InJustification;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InJustification;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::NewProp_InJustification = { "InJustification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextLayoutWidget_eventSetJustification_Parms, InJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) }; // 2107748386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::NewProp_InJustification,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextLayoutWidget, nullptr, "SetJustification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::TextLayoutWidget_eventSetJustification_Parms), Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextLayoutWidget_SetJustification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextLayoutWidget);
	UClass* Z_Construct_UClass_UTextLayoutWidget_NoRegister()
	{
		return UTextLayoutWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTextLayoutWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapedTextOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShapedTextOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Justification;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WrappingPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrappingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WrappingPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoWrapText_MetaData[];
#endif
		static void NewProp_AutoWrapText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoWrapText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrapTextAt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WrapTextAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineHeightPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineHeightPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextLayoutWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextLayoutWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextLayoutWidget_SetJustification, "SetJustification" }, // 2132512908
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all widgets that use a text layout.\n * Contains the common options that should be exposed for the underlying Slate widget.\n */" },
		{ "IncludePath", "Components/TextWidgetTypes.h" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Base class for all widgets that use a text layout.\nContains the common options that should be exposed for the underlying Slate widget." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Controls how the text within this widget should be shaped. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Controls how the text within this widget should be shaped." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions = { "ShapedTextOptions", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextLayoutWidget, ShapedTextOptions), Z_Construct_UScriptStruct_FShapedTextOptions, METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions_MetaData)) }; // 4212223073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification_MetaData[] = {
		{ "BlueprintSetter", "SetJustification" },
		{ "Category", "Appearance" },
		{ "Comment", "/** How the text should be aligned with the margin. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "How the text should be aligned with the margin." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextLayoutWidget, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification_MetaData)) }; // 2107748386
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_MetaData[] = {
		{ "Category", "Wrapping" },
		{ "Comment", "/** The wrapping policy to use. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "The wrapping policy to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy = { "WrappingPolicy", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextLayoutWidget, WrappingPolicy), Z_Construct_UEnum_Slate_ETextWrappingPolicy, METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_MetaData)) }; // 3269947813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_MetaData[] = {
		{ "Category", "Wrapping" },
		{ "Comment", "/** True if we're wrapping text automatically based on the computed horizontal space for this widget. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "True if we're wrapping text automatically based on the computed horizontal space for this widget." },
	};
#endif
	void Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_SetBit(void* Obj)
	{
		((UTextLayoutWidget*)Obj)->AutoWrapText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText = { "AutoWrapText", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextLayoutWidget), &Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt_MetaData[] = {
		{ "Category", "Wrapping" },
		{ "Comment", "/** Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt = { "WrapTextAt", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextLayoutWidget, WrapTextAt), METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount of blank space left around the edges of text area. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "The amount of blank space left around the edges of text area." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextLayoutWidget, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount to scale each lines height by. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "The amount to scale each lines height by." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage = { "LineHeightPercentage", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextLayoutWidget, LineHeightPercentage), METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextLayoutWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextLayoutWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextLayoutWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextLayoutWidget_Statics::ClassParams = {
		&UTextLayoutWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextLayoutWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextLayoutWidget()
	{
		if (!Z_Registration_Info_UClass_UTextLayoutWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextLayoutWidget.OuterSingleton, Z_Construct_UClass_UTextLayoutWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextLayoutWidget.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UTextLayoutWidget>()
	{
		return UTextLayoutWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextLayoutWidget);
	UTextLayoutWidget::~UTextLayoutWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics::ScriptStructInfo[] = {
		{ FShapedTextOptions::StaticStruct, Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewStructOps, TEXT("ShapedTextOptions"), &Z_Registration_Info_UScriptStruct_ShapedTextOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShapedTextOptions), 4212223073U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextLayoutWidget, UTextLayoutWidget::StaticClass, TEXT("UTextLayoutWidget"), &Z_Registration_Info_UClass_UTextLayoutWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextLayoutWidget), 2352331246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_1349812402(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
