// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/SlateTypes.h"
#include "Fonts/SlateFontInfo.h"
#include "Layout/Margin.h"
#include "Sound/SlateSound.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Types/SlateVector2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UClass* Z_Construct_UClass_USlateTypes();
	SLATECORE_API UClass* Z_Construct_UClass_USlateTypes_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateCheckBoxType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextOverflowPolicy();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextTransformPolicy();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FDeprecateSlateVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FDockTabStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FExpandableAreaStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHeaderRowStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHyperlinkStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInlineTextImageStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBorderStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSearchBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSplitterStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableColumnHeaderStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableViewStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeControlStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FWindowStyle();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConsumeMouseWheel;
	static UEnum* EConsumeMouseWheel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConsumeMouseWheel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConsumeMouseWheel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EConsumeMouseWheel"));
		}
		return Z_Registration_Info_UEnum_EConsumeMouseWheel.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EConsumeMouseWheel>()
	{
		return EConsumeMouseWheel_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::Enumerators[] = {
		{ "EConsumeMouseWheel::WhenScrollingPossible", (int64)EConsumeMouseWheel::WhenScrollingPossible },
		{ "EConsumeMouseWheel::Always", (int64)EConsumeMouseWheel::Always },
		{ "EConsumeMouseWheel::Never", (int64)EConsumeMouseWheel::Never },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** Always consume mouse wheel event even if we don't scroll at all. */" },
		{ "Always.Name", "EConsumeMouseWheel::Always" },
		{ "Always.ToolTip", "Always consume mouse wheel event even if we don't scroll at all." },
		{ "Comment", "/** Used to determine how we should handle mouse wheel input events when someone scrolls. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "Never.Comment", "/** Never consume the mouse wheel */" },
		{ "Never.Name", "EConsumeMouseWheel::Never" },
		{ "Never.ToolTip", "Never consume the mouse wheel" },
		{ "ToolTip", "Used to determine how we should handle mouse wheel input events when someone scrolls." },
		{ "WhenScrollingPossible.Comment", "/** Only consume the mouse wheel event when we actually scroll some amount. */" },
		{ "WhenScrollingPossible.Name", "EConsumeMouseWheel::WhenScrollingPossible" },
		{ "WhenScrollingPossible.ToolTip", "Only consume the mouse wheel event when we actually scroll some amount." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EConsumeMouseWheel",
		"EConsumeMouseWheel",
		Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel()
	{
		if (!Z_Registration_Info_UEnum_EConsumeMouseWheel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConsumeMouseWheel.InnerSingleton, Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConsumeMouseWheel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod;
	static UEnum* ESlateParentWindowSearchMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateParentWindowSearchMethod"));
		}
		return Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateParentWindowSearchMethod>()
	{
		return ESlateParentWindowSearchMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::Enumerators[] = {
		{ "ESlateParentWindowSearchMethod::ActiveWindow", (int64)ESlateParentWindowSearchMethod::ActiveWindow },
		{ "ESlateParentWindowSearchMethod::MainWindow", (int64)ESlateParentWindowSearchMethod::MainWindow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::Enum_MetaDataParams[] = {
		{ "ActiveWindow.Comment", "/** Favor using the active window (will fallback to the main window if the active window is unsuitable) */" },
		{ "ActiveWindow.Name", "ESlateParentWindowSearchMethod::ActiveWindow" },
		{ "ActiveWindow.ToolTip", "Favor using the active window (will fallback to the main window if the active window is unsuitable)" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Used to determine which search method we should use when finding a suitable parent window */" },
		{ "MainWindow.Comment", "/** Favor using the main window */" },
		{ "MainWindow.Name", "ESlateParentWindowSearchMethod::MainWindow" },
		{ "MainWindow.ToolTip", "Favor using the main window" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Used to determine which search method we should use when finding a suitable parent window" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateParentWindowSearchMethod",
		"ESlateParentWindowSearchMethod",
		Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod()
	{
		if (!Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateCheckBoxType;
	static UEnum* ESlateCheckBoxType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateCheckBoxType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateCheckBoxType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateCheckBoxType, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateCheckBoxType"));
		}
		return Z_Registration_Info_UEnum_ESlateCheckBoxType.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateCheckBoxType::Type>()
	{
		return ESlateCheckBoxType_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::Enumerators[] = {
		{ "ESlateCheckBoxType::CheckBox", (int64)ESlateCheckBoxType::CheckBox },
		{ "ESlateCheckBoxType::ToggleButton", (int64)ESlateCheckBoxType::ToggleButton },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::Enum_MetaDataParams[] = {
		{ "CheckBox.Comment", "/** Traditional check box with check button and label (or other content) */" },
		{ "CheckBox.Name", "ESlateCheckBoxType::CheckBox" },
		{ "CheckBox.ToolTip", "Traditional check box with check button and label (or other content)" },
		{ "Comment", "/** Type of check box */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToggleButton.Comment", "/** Toggle button.  You provide button content (such as an image), and the user can press to toggle it. */" },
		{ "ToggleButton.Name", "ESlateCheckBoxType::ToggleButton" },
		{ "ToggleButton.ToolTip", "Toggle button.  You provide button content (such as an image), and the user can press to toggle it." },
		{ "ToolTip", "Type of check box" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateCheckBoxType",
		"ESlateCheckBoxType::Type",
		Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateCheckBoxType()
	{
		if (!Z_Registration_Info_UEnum_ESlateCheckBoxType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateCheckBoxType.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateCheckBoxType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECheckBoxState;
	static UEnum* ECheckBoxState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECheckBoxState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECheckBoxState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ECheckBoxState, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ECheckBoxState"));
		}
		return Z_Registration_Info_UEnum_ECheckBoxState.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ECheckBoxState>()
	{
		return ECheckBoxState_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::Enumerators[] = {
		{ "ECheckBoxState::Unchecked", (int64)ECheckBoxState::Unchecked },
		{ "ECheckBoxState::Checked", (int64)ECheckBoxState::Checked },
		{ "ECheckBoxState::Undetermined", (int64)ECheckBoxState::Undetermined },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Checked.Comment", "/** Checked */" },
		{ "Checked.Name", "ECheckBoxState::Checked" },
		{ "Checked.ToolTip", "Checked" },
		{ "Comment", "/** Current state of the check box */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Current state of the check box" },
		{ "Unchecked.Comment", "/** Unchecked */" },
		{ "Unchecked.Name", "ECheckBoxState::Unchecked" },
		{ "Unchecked.ToolTip", "Unchecked" },
		{ "Undetermined.Comment", "/** Neither checked nor unchecked */" },
		{ "Undetermined.Name", "ECheckBoxState::Undetermined" },
		{ "Undetermined.ToolTip", "Neither checked nor unchecked" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ECheckBoxState",
		"ECheckBoxState",
		Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState()
	{
		if (!Z_Registration_Info_UEnum_ECheckBoxState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECheckBoxState.InnerSingleton, Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECheckBoxState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextOverflowPolicy;
	static UEnum* ETextOverflowPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextOverflowPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextOverflowPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ETextOverflowPolicy"));
		}
		return Z_Registration_Info_UEnum_ETextOverflowPolicy.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ETextOverflowPolicy>()
	{
		return ETextOverflowPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::Enumerators[] = {
		{ "ETextOverflowPolicy::Clip", (int64)ETextOverflowPolicy::Clip },
		{ "ETextOverflowPolicy::Ellipsis", (int64)ETextOverflowPolicy::Ellipsis },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clip.Comment", "/** Overflowing text will be clipped */" },
		{ "Clip.Name", "ETextOverflowPolicy::Clip" },
		{ "Clip.ToolTip", "Overflowing text will be clipped" },
		{ "Comment", "/**\n * The different methods that can be used to determine what happens to text when it is longer than its allowed length\n */" },
		{ "Ellipsis.Comment", "/** Overflowing text will be replaced with an ellipsis */" },
		{ "Ellipsis.Name", "ETextOverflowPolicy::Ellipsis" },
		{ "Ellipsis.ToolTip", "Overflowing text will be replaced with an ellipsis" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The different methods that can be used to determine what happens to text when it is longer than its allowed length" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ETextOverflowPolicy",
		"ETextOverflowPolicy",
		Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ETextOverflowPolicy()
	{
		if (!Z_Registration_Info_UEnum_ETextOverflowPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextOverflowPolicy.InnerSingleton, Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextOverflowPolicy.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCheckBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FCheckBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CheckBoxStyle;
class UScriptStruct* FCheckBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CheckBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CheckBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("CheckBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_CheckBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCheckBoxStyle>()
{
	return FCheckBoxStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCheckBoxStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CheckBoxType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UncheckedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedHoveredImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UncheckedHoveredImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedPressedImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UncheckedPressedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedHoveredImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedHoveredImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedPressedImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedPressedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndeterminedImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndeterminedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndeterminedHoveredImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndeterminedHoveredImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndeterminedPressedImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndeterminedPressedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundHoveredImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundHoveredImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundPressedImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundPressedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredForeground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedForeground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedForeground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedHoveredForeground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedHoveredForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedPressedForeground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedPressedForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndeterminedForeground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndeterminedForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedSlateSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UncheckedSlateSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredSlateSound;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedSound_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CheckedSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedSound_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UncheckedSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSound_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HoveredSound;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SCheckBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SCheckBox" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckBoxStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckBoxType_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The visual type of the checkbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The visual type of the checkbox" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckBoxType = { "CheckBoxType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckBoxType), Z_Construct_UEnum_SlateCore_ESlateCheckBoxType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckBoxType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckBoxType_MetaData)) }; // 3077855935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when the CheckBox is unchecked (normal) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when the CheckBox is unchecked (normal)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedImage = { "UncheckedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UncheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedHoveredImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when the CheckBox is unchecked and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when the CheckBox is unchecked and hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedHoveredImage = { "UncheckedHoveredImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UncheckedHoveredImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedHoveredImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedHoveredImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedPressedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when the CheckBox is unchecked and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when the CheckBox is unchecked and hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedPressedImage = { "UncheckedPressedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UncheckedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedPressedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedPressedImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when the CheckBox is checked */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when the CheckBox is checked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedImage = { "CheckedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when checked and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when checked and hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredImage = { "CheckedHoveredImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedHoveredImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when checked and pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when checked and pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedImage = { "CheckedPressedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when the CheckBox is undetermined */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when the CheckBox is undetermined" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedImage = { "UndeterminedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UndeterminedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedHoveredImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when CheckBox is undetermined and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when CheckBox is undetermined and hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedHoveredImage = { "UndeterminedHoveredImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UndeterminedHoveredImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedHoveredImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedHoveredImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedPressedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when CheckBox is undetermined and pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when CheckBox is undetermined and pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedPressedImage = { "UndeterminedPressedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UndeterminedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedPressedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedPressedImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background appearance */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background appearance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, BackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundHoveredImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background appearance when hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background appearance when hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundHoveredImage = { "BackgroundHoveredImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, BackgroundHoveredImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundHoveredImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundHoveredImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundPressedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background appearance when pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background appearance when pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundPressedImage = { "BackgroundPressedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, BackgroundPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundPressedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundPressedImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The normal unchecked foreground color */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The normal unchecked foreground color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_ForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_ForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredForeground = { "HoveredForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, HoveredForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredForeground_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_PressedForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_PressedForeground = { "PressedForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, PressedForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_PressedForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_PressedForeground_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when checked */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when checked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedForeground = { "CheckedForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedForeground_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when checked and pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when checked and pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredForeground = { "CheckedHoveredForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedHoveredForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredForeground_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when checked and pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when checked and pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedForeground = { "CheckedPressedForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedPressedForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedForeground_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when the check state is indeterminate */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when the check state is indeterminate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedForeground = { "UndeterminedForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UndeterminedForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedForeground_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BorderBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** BorderBackgroundColor refers to the actual color and opacity of the supplied border image on toggle buttons */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "BorderBackgroundColor refers to the actual color and opacity of the supplied border image on toggle buttons" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BorderBackgroundColor = { "BorderBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, BorderBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BorderBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BorderBackgroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the check box should play when checked\n\x09 */" },
		{ "DisplayName", "Checked Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the check box should play when checked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSlateSound = { "CheckedSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSlateSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the check box should play when unchecked\n\x09 */" },
		{ "DisplayName", "Unchecked Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the check box should play when unchecked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSlateSound = { "UncheckedSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UncheckedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSlateSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the check box should play when initially hovered over\n\x09 */" },
		{ "DisplayName", "Hovered Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the check box should play when initially hovered over" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSlateSound = { "HoveredSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, HoveredSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSlateSound_MetaData)) }; // 2826200611
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSound = { "CheckedSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedSound_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSound = { "UncheckedSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UncheckedSound_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSound = { "HoveredSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckBoxStyle, HoveredSound_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSound_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckBoxType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedHoveredImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedPressedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedHoveredImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedPressedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundHoveredImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundPressedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_ForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_PressedForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BorderBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSlateSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSlateSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSlateSound,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSound,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"CheckBoxStyle",
		sizeof(FCheckBoxStyle),
		alignof(FCheckBoxStyle),
		Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_CheckBoxStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CheckBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CheckBoxStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextTransformPolicy;
	static UEnum* ETextTransformPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextTransformPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextTransformPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ETextTransformPolicy, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ETextTransformPolicy"));
		}
		return Z_Registration_Info_UEnum_ETextTransformPolicy.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ETextTransformPolicy>()
	{
		return ETextTransformPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::Enumerators[] = {
		{ "ETextTransformPolicy::None", (int64)ETextTransformPolicy::None },
		{ "ETextTransformPolicy::ToLower", (int64)ETextTransformPolicy::ToLower },
		{ "ETextTransformPolicy::ToUpper", (int64)ETextTransformPolicy::ToUpper },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Text transformation policy that can be applied to the text before displaying it.\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "None.Comment", "/** No transform, just use the given text as-is */" },
		{ "None.Name", "ETextTransformPolicy::None" },
		{ "None.ToolTip", "No transform, just use the given text as-is" },
		{ "ToLower.Comment", "/** Convert the text to lowercase for display */" },
		{ "ToLower.Name", "ETextTransformPolicy::ToLower" },
		{ "ToLower.ToolTip", "Convert the text to lowercase for display" },
		{ "ToolTip", "Text transformation policy that can be applied to the text before displaying it." },
		{ "ToUpper.Comment", "/** Convert the text to uppercase for display */" },
		{ "ToUpper.Name", "ETextTransformPolicy::ToUpper" },
		{ "ToUpper.ToolTip", "Convert the text to uppercase for display" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ETextTransformPolicy",
		"ETextTransformPolicy",
		Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ETextTransformPolicy()
	{
		if (!Z_Registration_Info_UEnum_ETextTransformPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextTransformPolicy.InnerSingleton, Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextTransformPolicy.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTextBlockStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FTextBlockStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextBlockStyle;
class UScriptStruct* FTextBlockStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextBlockStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextBlockStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextBlockStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("TextBlockStyle"));
	}
	return Z_Registration_Info_UScriptStruct_TextBlockStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTextBlockStyle>()
{
	return FTextBlockStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextBlockStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HighlightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightShape_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HighlightShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrikeBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrikeBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderlineBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnderlineBrush;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverflowPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverflowPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverflowPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an STextBlock\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an STextBlock" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextBlockStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font family and size to be used when displaying this text. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Font family and size to be used when displaying this text." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextBlockStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_Font_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color and opacity of this text */" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The color and opacity of this text" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextBlockStyle, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ColorAndOpacity_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** How much should the shadow be offset? An offset of 0 implies no shadow. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "How much should the shadow be offset? An offset of 0 implies no shadow." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextBlockStyle, ShadowOffset), Z_Construct_UScriptStruct_FDeprecateSlateVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowOffset_MetaData)) }; // 3533773233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color and opacity of the shadow */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The color and opacity of the shadow" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextBlockStyle, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_SelectedBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The background color of selected text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The background color of selected text" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_SelectedBackgroundColor = { "SelectedBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextBlockStyle, SelectedBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_SelectedBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_SelectedBackgroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color of highlighted text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The color of highlighted text" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightColor = { "HighlightColor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextBlockStyle, HighlightColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightShape_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The shape of highlighted text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The shape of highlighted text" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightShape = { "HighlightShape", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextBlockStyle, HighlightShape), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightShape_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_StrikeBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush used to draw an strike through the text (if any) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The brush used to draw an strike through the text (if any)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_StrikeBrush = { "StrikeBrush", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextBlockStyle, StrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_StrikeBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_StrikeBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_UnderlineBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush used to draw an underline under the text (if any) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The brush used to draw an underline under the text (if any)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_UnderlineBrush = { "UnderlineBrush", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextBlockStyle, UnderlineBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_UnderlineBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_UnderlineBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_TransformPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_TransformPolicy_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The Text Transform Policy (defaults to None) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The Text Transform Policy (defaults to None)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_TransformPolicy = { "TransformPolicy", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextBlockStyle, TransformPolicy), Z_Construct_UEnum_SlateCore_ETextTransformPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_TransformPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_TransformPolicy_MetaData)) }; // 883314779
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_OverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_OverflowPolicy_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Determines what happens to text that is clipped and doesn't fit within the clip rect of a text widget */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Determines what happens to text that is clipped and doesn't fit within the clip rect of a text widget" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_OverflowPolicy = { "OverflowPolicy", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextBlockStyle, OverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_OverflowPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_OverflowPolicy_MetaData)) }; // 1604726165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextBlockStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_SelectedBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_StrikeBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_UnderlineBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_TransformPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_TransformPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_OverflowPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_OverflowPolicy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"TextBlockStyle",
		sizeof(FTextBlockStyle),
		alignof(FTextBlockStyle),
		Z_Construct_UScriptStruct_FTextBlockStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_TextBlockStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextBlockStyle.InnerSingleton, Z_Construct_UScriptStruct_FTextBlockStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextBlockStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FButtonStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FButtonStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ButtonStyle;
class UScriptStruct* FButtonStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ButtonStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ButtonStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FButtonStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ButtonStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ButtonStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FButtonStyle>()
{
	return FButtonStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FButtonStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hovered_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pressed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Disabled_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Disabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalForeground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredForeground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedForeground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledForeground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedSlateSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredSlateSound;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedSound_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PressedSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSound_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HoveredSound;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SButton\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SButton" },
	};
#endif
	void* Z_Construct_UScriptStruct_FButtonStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FButtonStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Button appearance when the button is not hovered or pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Button appearance when the button is not hovered or pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, Normal), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Normal_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Hovered_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Button appearance when hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Button appearance when hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Hovered = { "Hovered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, Hovered), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Hovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Hovered_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Pressed_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Button appearance when pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Button appearance when pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, Pressed), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Pressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Pressed_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Disabled_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Button appearance when disabled, by default this is set to an invalid resource when that is the case default disabled drawing is used. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Button appearance when disabled, by default this is set to an invalid resource when that is the case default disabled drawing is used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Disabled = { "Disabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, Disabled), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Disabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Disabled_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when the button is not hovered or pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when the button is not hovered or pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalForeground = { "NormalForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, NormalForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalForeground_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredForeground = { "HoveredForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, HoveredForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredForeground_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedForeground = { "PressedForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, PressedForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedForeground_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_DisabledForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when disabled */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when disabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_DisabledForeground = { "DisabledForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, DisabledForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_DisabledForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_DisabledForeground_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Padding that accounts for the border in the button's background image.\n\x09 * When this is applied, the content of the button should appear flush\n\x09 * with the button's border. Use this padding when the button is not pressed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding that accounts for the border in the button's background image.\nWhen this is applied, the content of the button should appear flush\nwith the button's border. Use this padding when the button is not pressed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalPadding = { "NormalPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, NormalPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Same as NormalPadding but used when the button is pressed. Allows for moving the content to match\n\x09 * any \"movement\" in the button's border image.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Same as NormalPadding but used when the button is pressed. Allows for moving the content to match\nany \"movement\" in the button's border image." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedPadding = { "PressedPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, PressedPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the button should play when pressed\n\x09 */" },
		{ "DisplayName", "Pressed Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the button should play when pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSlateSound = { "PressedSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, PressedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSlateSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the button should play when initially hovered over\n\x09 */" },
		{ "DisplayName", "Hovered Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the button should play when initially hovered over" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSlateSound = { "HoveredSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, HoveredSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSlateSound_MetaData)) }; // 2826200611
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSound = { "PressedSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, PressedSound_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSound = { "HoveredSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FButtonStyle, HoveredSound_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSound_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FButtonStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Hovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Disabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_DisabledForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSlateSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSlateSound,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSound,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FButtonStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ButtonStyle",
		sizeof(FButtonStyle),
		alignof(FButtonStyle),
		Z_Construct_UScriptStruct_FButtonStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_ButtonStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ButtonStyle.InnerSingleton, Z_Construct_UScriptStruct_FButtonStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ButtonStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FComboButtonStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FComboButtonStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboButtonStyle;
class UScriptStruct* FComboButtonStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboButtonStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboButtonStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboButtonStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ComboButtonStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ComboButtonStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FComboButtonStyle>()
{
	return FComboButtonStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboButtonStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownArrowImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DownArrowImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuBorderBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuBorderBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuBorderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuBorderPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownArrowPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DownArrowPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownArrowAlign_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DownArrowAlign;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboButtonStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SComboButton\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SComboButton" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboButtonStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our SButton.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The style to use for our SButton." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboButtonStyle, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Image to use for the down arrow.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for the down arrow." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowImage = { "DownArrowImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboButtonStyle, DownArrowImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09  * How much should the shadow be offset for the down arrow? \n\x09  * An offset of 0 implies no shadow. \n\x09  */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "How much should the shadow be offset for the down arrow?\nAn offset of 0 implies no shadow." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboButtonStyle, ShadowOffset), Z_Construct_UScriptStruct_FDeprecateSlateVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowOffset_MetaData)) }; // 3533773233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** \n\x09  * The color and opacity of the shadow for the down arrow.\n\x09  * Only active if ShadowOffset is not (0,0).\n\x09  */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The color and opacity of the shadow for the down arrow.\nOnly active if ShadowOffset is not (0,0)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboButtonStyle, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Brush to use to add a \"menu border\" around the drop-down content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush to use to add a \"menu border\" around the drop-down content." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderBrush = { "MenuBorderBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboButtonStyle, MenuBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Padding to use to add a \"menu border\" around the drop-down content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding to use to add a \"menu border\" around the drop-down content." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderPadding = { "MenuBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboButtonStyle, MenuBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ContentPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/*\n\x09 * Button Content Padding \n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "* Button Content Padding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ContentPadding = { "ContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboButtonStyle, ContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ContentPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ContentPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/*\n\x09 * Dropdown arrow padding (if a dropdown arrow exists)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "* Dropdown arrow padding (if a dropdown arrow exists)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowPadding = { "DownArrowPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboButtonStyle, DownArrowPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowAlign_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/*\n\x09 * Dropdown arrow vertical alignment\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "* Dropdown arrow vertical alignment" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowAlign = { "DownArrowAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboButtonStyle, DownArrowAlign), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowAlign_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowAlign_MetaData)) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboButtonStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ContentPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowAlign,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ComboButtonStyle",
		sizeof(FComboButtonStyle),
		alignof(FComboButtonStyle),
		Z_Construct_UScriptStruct_FComboButtonStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboButtonStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboButtonStyle.InnerSingleton, Z_Construct_UScriptStruct_FComboButtonStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboButtonStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FComboBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FComboBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboBoxStyle;
class UScriptStruct* FComboBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ComboBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ComboBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FComboBoxStyle>()
{
	return FComboBoxStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboBoxStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedSlateSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionChangeSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionChangeSlateSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuRowPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuRowPadding;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedSound_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PressedSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionChangeSound_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectionChangeSound;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboBoxStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SComboBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SComboBox" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboBoxStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ComboButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our SComboButton\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The style to use for our SComboButton" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ComboButtonStyle = { "ComboButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboBoxStyle, ComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ComboButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ComboButtonStyle_MetaData)) }; // 3302369615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the button should play when pressed\n\x09 */" },
		{ "DisplayName", "Pressed Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the button should play when pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSlateSound = { "PressedSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboBoxStyle, PressedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSlateSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The Sound to play when the selection is changed\n\x09 */" },
		{ "DisplayName", "Selection Change Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The Sound to play when the selection is changed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSlateSound = { "SelectionChangeSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboBoxStyle, SelectionChangeSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSlateSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ContentPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/*\n\x09 * Button Content Padding \n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "* Button Content Padding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ContentPadding = { "ContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboBoxStyle, ContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ContentPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ContentPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_MenuRowPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/*\n\x09 * Menu Row Padding \n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "* Menu Row Padding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_MenuRowPadding = { "MenuRowPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboBoxStyle, MenuRowPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_MenuRowPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_MenuRowPadding_MetaData)) }; // 2014822612
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSound = { "PressedSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboBoxStyle, PressedSound_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSound = { "SelectionChangeSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboBoxStyle, SelectionChangeSound_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSound_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboBoxStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ComboButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSlateSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSlateSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ContentPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_MenuRowPadding,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSound,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ComboBoxStyle",
		sizeof(FComboBoxStyle),
		alignof(FComboBoxStyle),
		Z_Construct_UScriptStruct_FComboBoxStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboBoxStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FComboBoxStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboBoxStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHyperlinkStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FHyperlinkStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HyperlinkStyle;
class UScriptStruct* FHyperlinkStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HyperlinkStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HyperlinkStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHyperlinkStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("HyperlinkStyle"));
	}
	return Z_Registration_Info_UScriptStruct_HyperlinkStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FHyperlinkStyle>()
{
	return FHyperlinkStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHyperlinkStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderlineStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnderlineStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SHyperlink\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SHyperlink" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHyperlinkStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_UnderlineStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Underline style */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Underline style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_UnderlineStyle = { "UnderlineStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHyperlinkStyle, UnderlineStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_UnderlineStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_UnderlineStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Text style */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Text style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHyperlinkStyle, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_TextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHyperlinkStyle, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_Padding_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_UnderlineStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_TextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_Padding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"HyperlinkStyle",
		sizeof(FHyperlinkStyle),
		alignof(FHyperlinkStyle),
		Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHyperlinkStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_HyperlinkStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HyperlinkStyle.InnerSingleton, Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HyperlinkStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEditableTextStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FEditableTextStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditableTextStyle;
class UScriptStruct* FEditableTextStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditableTextStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditableTextStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditableTextStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EditableTextStyle"));
	}
	return Z_Registration_Info_UScriptStruct_EditableTextStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FEditableTextStyle>()
{
	return FEditableTextStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditableTextStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageSelected_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageComposing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageComposing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaretImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaretImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SEditableText\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SEditableText" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditableTextStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font family and size to be used when displaying this text. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Font family and size to be used when displaying this text." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_Font_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color and opacity of this text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The color and opacity of this text" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextStyle, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_ColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_ColorAndOpacity_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageSelected_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background image for the selected text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background image for the selected text" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageSelected = { "BackgroundImageSelected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextStyle, BackgroundImageSelected), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageSelected_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageComposing_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background image for the selected text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background image for the selected text" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageComposing = { "BackgroundImageComposing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextStyle, BackgroundImageComposing), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageComposing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageComposing_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_CaretImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image brush used for the caret */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image brush used for the caret" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_CaretImage = { "CaretImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextStyle, CaretImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_CaretImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_CaretImage_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditableTextStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_ColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageComposing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_CaretImage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"EditableTextStyle",
		sizeof(FEditableTextStyle),
		alignof(FEditableTextStyle),
		Z_Construct_UScriptStruct_FEditableTextStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_EditableTextStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditableTextStyle.InnerSingleton, Z_Construct_UScriptStruct_FEditableTextStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditableTextStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FScrollBarStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FScrollBarStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScrollBarStyle;
class UScriptStruct* FScrollBarStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScrollBarStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScrollBarStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScrollBarStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ScrollBarStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ScrollBarStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FScrollBarStyle>()
{
	return FScrollBarStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScrollBarStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalBackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalBackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalBackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalTopSlotImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalTopSlotImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalTopSlotImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalTopSlotImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalBottomSlotImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalBottomSlotImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBottomSlotImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalBottomSlotImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalThumbImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalThumbImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredThumbImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredThumbImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DraggedThumbImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DraggedThumbImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBarStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SScrollBar\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SScrollBar" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScrollBarStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background image to use when the scrollbar is oriented horizontally */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background image to use when the scrollbar is oriented horizontally" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBackgroundImage = { "HorizontalBackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBarStyle, HorizontalBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBackgroundImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background image to use when the scrollbar is oriented vertically */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background image to use when the scrollbar is oriented vertically" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBackgroundImage = { "VerticalBackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBarStyle, VerticalBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBackgroundImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalTopSlotImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The image to use to represent the track above the thumb when the scrollbar is oriented vertically */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The image to use to represent the track above the thumb when the scrollbar is oriented vertically" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalTopSlotImage = { "VerticalTopSlotImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBarStyle, VerticalTopSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalTopSlotImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalTopSlotImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalTopSlotImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The image to use to represent the track above the thumb when the scrollbar is oriented horizontally */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The image to use to represent the track above the thumb when the scrollbar is oriented horizontally" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalTopSlotImage = { "HorizontalTopSlotImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBarStyle, HorizontalTopSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalTopSlotImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalTopSlotImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBottomSlotImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The image to use to represent the track below the thumb when the scrollbar is oriented vertically */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The image to use to represent the track below the thumb when the scrollbar is oriented vertically" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBottomSlotImage = { "VerticalBottomSlotImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBarStyle, VerticalBottomSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBottomSlotImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBottomSlotImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBottomSlotImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The image to use to represent the track below the thumb when the scrollbar is oriented horizontally */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The image to use to represent the track below the thumb when the scrollbar is oriented horizontally" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBottomSlotImage = { "HorizontalBottomSlotImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBarStyle, HorizontalBottomSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBottomSlotImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBottomSlotImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_NormalThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the scrollbar thumb is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the scrollbar thumb is in its normal state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_NormalThumbImage = { "NormalThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBarStyle, NormalThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_NormalThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_NormalThumbImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HoveredThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the scrollbar thumb is in its hovered state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the scrollbar thumb is in its hovered state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HoveredThumbImage = { "HoveredThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBarStyle, HoveredThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HoveredThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HoveredThumbImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_DraggedThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the scrollbar thumb is in its dragged state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the scrollbar thumb is in its dragged state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_DraggedThumbImage = { "DraggedThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBarStyle, DraggedThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_DraggedThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_DraggedThumbImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBarStyle, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_Thickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScrollBarStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalTopSlotImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalTopSlotImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBottomSlotImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBottomSlotImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_NormalThumbImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HoveredThumbImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_DraggedThumbImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_Thickness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ScrollBarStyle",
		sizeof(FScrollBarStyle),
		alignof(FScrollBarStyle),
		Z_Construct_UScriptStruct_FScrollBarStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_ScrollBarStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScrollBarStyle.InnerSingleton, Z_Construct_UScriptStruct_FScrollBarStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScrollBarStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEditableTextBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FEditableTextBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditableTextBoxStyle;
class UScriptStruct* FEditableTextBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditableTextBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EditableTextBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FEditableTextBoxStyle>()
{
	return FEditableTextBoxStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageHovered_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageHovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageFocused_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageFocused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageReadOnly_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReadOnlyForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReadOnlyForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusedForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusedForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HScrollBarPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HScrollBarPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VScrollBarPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VScrollBarPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SEditableTextBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SEditableTextBox" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditableTextBoxStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageNormal_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Border background image when the box is not hovered or focused */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Border background image when the box is not hovered or focused" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageNormal = { "BackgroundImageNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageNormal), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageNormal_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageHovered_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Border background image when the box is hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Border background image when the box is hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageHovered = { "BackgroundImageHovered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageHovered), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageHovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageHovered_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageFocused_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Border background image when the box is focused */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Border background image when the box is focused" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageFocused = { "BackgroundImageFocused", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageFocused), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageFocused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageFocused_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Border background image when the box is read-only */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Border background image when the box is read-only" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageReadOnly = { "BackgroundImageReadOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageReadOnly), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageReadOnly_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Font_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Font_MetaData)) }; // 192883377
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style of the text block, which dictates the font, color, and shadow options. Style overrides all other properties! */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The style of the text block, which dictates the font, color, and shadow options. Style overrides all other properties!" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_TextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The foreground color of text. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The foreground color of text." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The background color applied to the active background image */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The background color applied to the active background image" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ReadOnlyForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The read-only foreground color of text in read-only mode. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The read-only foreground color of text in read-only mode." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ReadOnlyForegroundColor = { "ReadOnlyForegroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, ReadOnlyForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ReadOnlyForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ReadOnlyForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_FocusedForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The foreground color of text when the edit box has keyboard focus. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The foreground color of text when the edit box has keyboard focus." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_FocusedForegroundColor = { "FocusedForegroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, FocusedForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_FocusedForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_FocusedForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_HScrollBarPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding around the horizontal scrollbar */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding around the horizontal scrollbar" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_HScrollBarPadding = { "HScrollBarPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, HScrollBarPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_HScrollBarPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_HScrollBarPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_VScrollBarPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding around the vertical scrollbar */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding around the vertical scrollbar" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_VScrollBarPadding = { "VScrollBarPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, VScrollBarPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_VScrollBarPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_VScrollBarPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used for the scrollbars */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used for the scrollbars" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ScrollBarStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ScrollBarStyle_MetaData)) }; // 2161279079
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageHovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageFocused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Padding,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Font,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_TextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ReadOnlyForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_FocusedForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_HScrollBarPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_VScrollBarPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ScrollBarStyle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"EditableTextBoxStyle",
		sizeof(FEditableTextBoxStyle),
		alignof(FEditableTextBoxStyle),
		Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInlineEditableTextBlockStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FInlineEditableTextBlockStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle;
class UScriptStruct* FInlineEditableTextBlockStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("InlineEditableTextBlockStyle"));
	}
	return Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FInlineEditableTextBlockStyle>()
{
	return FInlineEditableTextBlockStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditableTextBoxStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SInlineEditableTextBlock\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SInlineEditableTextBlock" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInlineEditableTextBlockStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_EditableTextBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style of the editable text box, which dictates the font, color, and shadow options. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The style of the editable text box, which dictates the font, color, and shadow options." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_EditableTextBoxStyle = { "EditableTextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInlineEditableTextBlockStyle, EditableTextBoxStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_EditableTextBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_EditableTextBoxStyle_MetaData)) }; // 255857817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style of the text block, which dictates the font, color, and shadow options. Style overrides all other properties! */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The style of the text block, which dictates the font, color, and shadow options. Style overrides all other properties!" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInlineEditableTextBlockStyle, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_TextStyle_MetaData)) }; // 622949925
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_EditableTextBoxStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_TextStyle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"InlineEditableTextBlockStyle",
		sizeof(FInlineEditableTextBlockStyle),
		alignof(FInlineEditableTextBlockStyle),
		Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.InnerSingleton, Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProgressBarStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FProgressBarStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressBarStyle;
class UScriptStruct* FProgressBarStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressBarStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressBarStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressBarStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ProgressBarStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressBarStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FProgressBarStyle>()
{
	return FProgressBarStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProgressBarStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarqueeImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarqueeImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableFillAnimation_MetaData[];
#endif
		static void NewProp_EnableFillAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableFillAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgressBarStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SProgressBar\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SProgressBar" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressBarStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background image to use for the progress bar */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background image to use for the progress bar" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProgressBarStyle, BackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_BackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_BackgroundImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_FillImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground image to use for the progress bar */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground image to use for the progress bar" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_FillImage = { "FillImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProgressBarStyle, FillImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_FillImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_FillImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_MarqueeImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for marquee mode */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for marquee mode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_MarqueeImage = { "MarqueeImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProgressBarStyle, MarqueeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_MarqueeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_MarqueeImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_EnableFillAnimation_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Enables a simple animation on the fill image to give the appearance that progress has not stalled. Disable this if you have a custom material which animates itself. \n\x09 * This requires a pattern in your material or texture to give the appearance of movement.  A solid color will show no movement. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Enables a simple animation on the fill image to give the appearance that progress has not stalled. Disable this if you have a custom material which animates itself.\nThis requires a pattern in your material or texture to give the appearance of movement.  A solid color will show no movement." },
	};
#endif
	void Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_EnableFillAnimation_SetBit(void* Obj)
	{
		((FProgressBarStyle*)Obj)->EnableFillAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_EnableFillAnimation = { "EnableFillAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FProgressBarStyle), &Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_EnableFillAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_EnableFillAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_EnableFillAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressBarStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_BackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_FillImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_MarqueeImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_EnableFillAnimation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressBarStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ProgressBarStyle",
		sizeof(FProgressBarStyle),
		alignof(FProgressBarStyle),
		Z_Construct_UScriptStruct_FProgressBarStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_ProgressBarStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressBarStyle.InnerSingleton, Z_Construct_UScriptStruct_FProgressBarStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProgressBarStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExpandableAreaStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FExpandableAreaStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpandableAreaStyle;
class UScriptStruct* FExpandableAreaStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpandableAreaStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ExpandableAreaStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FExpandableAreaStyle>()
{
	return FExpandableAreaStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollapsedImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollapsedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandedImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpandedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RolloutAnimationSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RolloutAnimationSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SExpandableArea\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SExpandableArea" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpandableAreaStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_CollapsedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the area is collapsed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the area is collapsed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_CollapsedImage = { "CollapsedImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandableAreaStyle, CollapsedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_CollapsedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_CollapsedImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_ExpandedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the area is expanded */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the area is expanded" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_ExpandedImage = { "ExpandedImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandableAreaStyle, ExpandedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_ExpandedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_ExpandedImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_RolloutAnimationSeconds_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** How long the rollout animation lasts */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "How long the rollout animation lasts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_RolloutAnimationSeconds = { "RolloutAnimationSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandableAreaStyle, RolloutAnimationSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_RolloutAnimationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_RolloutAnimationSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_CollapsedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_ExpandedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_RolloutAnimationSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ExpandableAreaStyle",
		sizeof(FExpandableAreaStyle),
		alignof(FExpandableAreaStyle),
		Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpandableAreaStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.InnerSingleton, Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSearchBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSearchBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SearchBoxStyle;
class UScriptStruct* FSearchBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SearchBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SearchBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SearchBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SearchBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSearchBoxStyle>()
{
	return FSearchBoxStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSearchBoxStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextBoxStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFontInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveFontInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpArrowImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpArrowImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownArrowImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DownArrowImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlassImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlassImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImagePadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLeftAlignButtons_MetaData[];
#endif
		static void NewProp_bLeftAlignButtons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftAlignButtons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLeftAlignSearchResultButtons_MetaData[];
#endif
		static void NewProp_bLeftAlignSearchResultButtons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftAlignSearchResultButtons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLeftAlignGlassImageAndClearButton_MetaData[];
#endif
		static void NewProp_bLeftAlignGlassImageAndClearButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftAlignGlassImageAndClearButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SSearchBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SSearchBox" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchBoxStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_TextBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style to use for the text box part of the search box */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style to use for the text box part of the search box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_TextBoxStyle = { "TextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchBoxStyle, TextBoxStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_TextBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_TextBoxStyle_MetaData)) }; // 255857817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ActiveFontInfo_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font to use for the text box part of the search box when a search term is entered*/" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Font to use for the text box part of the search box when a search term is entered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ActiveFontInfo = { "ActiveFontInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchBoxStyle, ActiveFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ActiveFontInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ActiveFontInfo_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_UpArrowImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for the search \"up\" arrow */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for the search \"up\" arrow" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_UpArrowImage = { "UpArrowImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchBoxStyle, UpArrowImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_UpArrowImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_UpArrowImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_DownArrowImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for the search \"down\" arrow */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for the search \"down\" arrow" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_DownArrowImage = { "DownArrowImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchBoxStyle, DownArrowImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_DownArrowImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_DownArrowImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_GlassImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for the search \"glass\" */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for the search \"glass\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_GlassImage = { "GlassImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchBoxStyle, GlassImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_GlassImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_GlassImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ClearImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for the search \"clear\" button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for the search \"clear\" button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ClearImage = { "ClearImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchBoxStyle, ClearImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ClearImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ClearImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ImagePadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding to use around the images */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding to use around the images" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ImagePadding = { "ImagePadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchBoxStyle, ImagePadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ImagePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ImagePadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignButtons_MetaData[] = {
		{ "Comment", "/** If true, buttons appear to the left of the search text */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use LeftAlignSearchResultButtons and LeftAlignGlassImageAndClearButton instead" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "If true, buttons appear to the left of the search text" },
	};
#endif
	void Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignButtons_SetBit(void* Obj)
	{
		((FSearchBoxStyle*)Obj)->bLeftAlignButtons_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignButtons = { "bLeftAlignButtons", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSearchBoxStyle), &Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignButtons_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignButtons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignSearchResultButtons_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If true, search result buttons appear to the left of the search text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "If true, search result buttons appear to the left of the search text" },
	};
#endif
	void Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignSearchResultButtons_SetBit(void* Obj)
	{
		((FSearchBoxStyle*)Obj)->bLeftAlignSearchResultButtons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignSearchResultButtons = { "bLeftAlignSearchResultButtons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSearchBoxStyle), &Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignSearchResultButtons_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignSearchResultButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignSearchResultButtons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignGlassImageAndClearButton_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If true, glass image and clear button appear to the left of the search text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "If true, glass image and clear button appear to the left of the search text" },
	};
#endif
	void Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignGlassImageAndClearButton_SetBit(void* Obj)
	{
		((FSearchBoxStyle*)Obj)->bLeftAlignGlassImageAndClearButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignGlassImageAndClearButton = { "bLeftAlignGlassImageAndClearButton", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSearchBoxStyle), &Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignGlassImageAndClearButton_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignGlassImageAndClearButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignGlassImageAndClearButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_TextBoxStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ActiveFontInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_UpArrowImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_DownArrowImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_GlassImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ClearImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ImagePadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignSearchResultButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignGlassImageAndClearButton,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"SearchBoxStyle",
		sizeof(FSearchBoxStyle),
		alignof(FSearchBoxStyle),
		Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchBoxStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_SearchBoxStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SearchBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SearchBoxStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSliderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSliderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SliderStyle;
class UScriptStruct* FSliderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SliderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SliderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSliderStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SliderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SliderStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSliderStyle>()
{
	return FSliderStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSliderStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalBarImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalBarImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBarImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredBarImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledBarImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledBarImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalThumbImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalThumbImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredThumbImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredThumbImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledThumbImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledThumbImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SSlider\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SSlider" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSliderStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSliderStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider bar is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider bar is in its normal state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalBarImage = { "NormalBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSliderStyle, NormalBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalBarImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalBarImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider bar is in its hovered state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider bar is in its hovered state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredBarImage = { "HoveredBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSliderStyle, HoveredBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredBarImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredBarImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider bar is in its disabled state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider bar is in its disabled state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledBarImage = { "DisabledBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSliderStyle, DisabledBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledBarImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledBarImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider thumb is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider thumb is in its normal state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalThumbImage = { "NormalThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSliderStyle, NormalThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalThumbImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider thumb is in its hovered state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider thumb is in its hovered state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredThumbImage = { "HoveredThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSliderStyle, HoveredThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredThumbImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider thumb is in its disabled state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider thumb is in its disabled state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledThumbImage = { "DisabledThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSliderStyle, DisabledThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledThumbImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_BarThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_BarThickness = { "BarThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSliderStyle, BarThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_BarThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_BarThickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSliderStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalBarImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredBarImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledBarImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalThumbImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredThumbImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledThumbImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_BarThickness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSliderStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"SliderStyle",
		sizeof(FSliderStyle),
		alignof(FSliderStyle),
		Z_Construct_UScriptStruct_FSliderStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_SliderStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SliderStyle.InnerSingleton, Z_Construct_UScriptStruct_FSliderStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SliderStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVolumeControlStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FVolumeControlStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VolumeControlStyle;
class UScriptStruct* FVolumeControlStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VolumeControlStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VolumeControlStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumeControlStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("VolumeControlStyle"));
	}
	return Z_Registration_Info_UScriptStruct_VolumeControlStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FVolumeControlStyle>()
{
	return FVolumeControlStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVolumeControlStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighVolumeImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HighVolumeImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidVolumeImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MidVolumeImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowVolumeImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LowVolumeImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoVolumeImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoVolumeImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MutedImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MutedImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SVolumeControl\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SVolumeControl" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumeControlStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_SliderStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style of the volume control slider */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The style of the volume control slider" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_SliderStyle = { "SliderStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeControlStyle, SliderStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_SliderStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_SliderStyle_MetaData)) }; // 4127039365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_HighVolumeImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the volume is set to high */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the volume is set to high" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_HighVolumeImage = { "HighVolumeImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeControlStyle, HighVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_HighVolumeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_HighVolumeImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MidVolumeImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the volume is set to mid-range */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the volume is set to mid-range" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MidVolumeImage = { "MidVolumeImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeControlStyle, MidVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MidVolumeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MidVolumeImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_LowVolumeImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the volume is set to low */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the volume is set to low" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_LowVolumeImage = { "LowVolumeImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeControlStyle, LowVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_LowVolumeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_LowVolumeImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_NoVolumeImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the volume is set to off */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the volume is set to off" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_NoVolumeImage = { "NoVolumeImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeControlStyle, NoVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_NoVolumeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_NoVolumeImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MutedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the volume is muted */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the volume is muted" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MutedImage = { "MutedImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeControlStyle, MutedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MutedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MutedImage_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_SliderStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_HighVolumeImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MidVolumeImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_LowVolumeImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_NoVolumeImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MutedImage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"VolumeControlStyle",
		sizeof(FVolumeControlStyle),
		alignof(FVolumeControlStyle),
		Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVolumeControlStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_VolumeControlStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VolumeControlStyle.InnerSingleton, Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VolumeControlStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInlineTextImageStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FInlineTextImageStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InlineTextImageStyle;
class UScriptStruct* FInlineTextImageStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InlineTextImageStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InlineTextImageStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInlineTextImageStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("InlineTextImageStyle"));
	}
	return Z_Registration_Info_UScriptStruct_InlineTextImageStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FInlineTextImageStyle>()
{
	return FInlineTextImageStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Baseline_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Baseline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an inline image used by rich text\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an inline image used by rich text" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInlineTextImageStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider thumb is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider thumb is in its normal state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInlineTextImageStyle, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Image_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Baseline_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The offset from the bottom of the image height to the baseline. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The offset from the bottom of the image height to the baseline." },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Baseline = { "Baseline", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInlineTextImageStyle, Baseline), METADATA_PARAMS(Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Baseline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Baseline_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Baseline,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"InlineTextImageStyle",
		sizeof(FInlineTextImageStyle),
		alignof(FInlineTextImageStyle),
		Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInlineTextImageStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_InlineTextImageStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InlineTextImageStyle.InnerSingleton, Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InlineTextImageStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSpinBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSpinBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpinBoxStyle;
class UScriptStruct* FSpinBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpinBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpinBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpinBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SpinBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SpinBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSpinBoxStyle>()
{
	return FSpinBoxStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpinBoxStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFillBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveFillBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredFillBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredFillBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InactiveFillBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveFillBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowsImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrowsImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsetPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InsetPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SSpinBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SSpinBox" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpinBoxStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the background of the spinbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the background of the spinbox" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpinBoxStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_BackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_BackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveBackgroundBrush = { "ActiveBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpinBoxStyle, ActiveBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the background of the spinbox when it's hovered over */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the background of the spinbox when it's hovered over" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredBackgroundBrush = { "HoveredBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpinBoxStyle, HoveredBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveFillBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to fill the spinbox when it's active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to fill the spinbox when it's active" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveFillBrush = { "ActiveFillBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpinBoxStyle, ActiveFillBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveFillBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveFillBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredFillBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to fill the spinbox when it's hovered and not active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to fill the spinbox when it's hovered and not active" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredFillBrush = { "HoveredFillBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpinBoxStyle, HoveredFillBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredFillBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredFillBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InactiveFillBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to fill the spinbox when it's inactive */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to fill the spinbox when it's inactive" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InactiveFillBrush = { "InactiveFillBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpinBoxStyle, InactiveFillBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InactiveFillBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InactiveFillBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ArrowsImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used to draw the spinbox arrows */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used to draw the spinbox arrows" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ArrowsImage = { "ArrowsImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpinBoxStyle, ArrowsImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ArrowsImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ArrowsImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "Comment", "/** Color used to draw the spinbox foreground elements */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used to draw the spinbox foreground elements" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpinBoxStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_TextPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding to add around the spinbox and its text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding to add around the spinbox and its text" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_TextPadding = { "TextPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpinBoxStyle, TextPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_TextPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_TextPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InsetPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding between the background brush and the fill brush */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding between the background brush and the fill brush" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InsetPadding = { "InsetPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpinBoxStyle, InsetPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InsetPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InsetPadding_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_BackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveFillBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredFillBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InactiveFillBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ArrowsImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_TextPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InsetPadding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"SpinBoxStyle",
		sizeof(FSpinBoxStyle),
		alignof(FSpinBoxStyle),
		Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_SpinBoxStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpinBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpinBoxStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSplitterStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSplitterStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SplitterStyle;
class UScriptStruct* FSplitterStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SplitterStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SplitterStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplitterStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SplitterStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SplitterStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSplitterStyle>()
{
	return FSplitterStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSplitterStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleNormalBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandleNormalBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleHighlightBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandleHighlightBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplitterStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SSplitter\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SSplitter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplitterStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleNormalBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the handle in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the handle in its normal state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleNormalBrush = { "HandleNormalBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplitterStyle, HandleNormalBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleNormalBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleNormalBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleHighlightBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the handle in its highlight state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the handle in its highlight state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleHighlightBrush = { "HandleHighlightBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplitterStyle, HandleHighlightBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleHighlightBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleHighlightBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplitterStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleNormalBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleHighlightBrush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplitterStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"SplitterStyle",
		sizeof(FSplitterStyle),
		alignof(FSplitterStyle),
		Z_Construct_UScriptStruct_FSplitterStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplitterStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplitterStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_SplitterStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SplitterStyle.InnerSingleton, Z_Construct_UScriptStruct_FSplitterStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SplitterStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTableViewStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FTableViewStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TableViewStyle;
class UScriptStruct* FTableViewStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TableViewStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TableViewStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableViewStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("TableViewStyle"));
	}
	return Z_Registration_Info_UScriptStruct_TableViewStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTableViewStyle>()
{
	return FTableViewStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTableViewStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableViewStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an STableView\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an STableView" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTableViewStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableViewStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableViewStyle_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a selected row is active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a selected row is active" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableViewStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableViewStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableViewStyle_Statics::NewProp_BackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableViewStyle_Statics::NewProp_BackgroundBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTableViewStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableViewStyle_Statics::NewProp_BackgroundBrush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTableViewStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"TableViewStyle",
		sizeof(FTableViewStyle),
		alignof(FTableViewStyle),
		Z_Construct_UScriptStruct_FTableViewStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableViewStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTableViewStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableViewStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTableViewStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_TableViewStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TableViewStyle.InnerSingleton, Z_Construct_UScriptStruct_FTableViewStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TableViewStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTableRowStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FTableRowStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TableRowStyle;
class UScriptStruct* FTableRowStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TableRowStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TableRowStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("TableRowStyle"));
	}
	return Z_Registration_Info_UScriptStruct_TableRowStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTableRowStyle>()
{
	return FTableRowStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTableRowStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorFocusedBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorFocusedBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveHoveredBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHoveredBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InactiveHoveredBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveHoveredBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InactiveBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseParentRowBrush_MetaData[];
#endif
		static void NewProp_bUseParentRowBrush_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParentRowBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentRowBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentRowBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentRowBackgroundHoveredBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentRowBackgroundHoveredBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvenRowBackgroundHoveredBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvenRowBackgroundHoveredBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvenRowBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvenRowBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OddRowBackgroundHoveredBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OddRowBackgroundHoveredBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OddRowBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OddRowBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropIndicator_Above_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DropIndicator_Above;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropIndicator_Onto_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DropIndicator_Onto;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropIndicator_Below_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DropIndicator_Below;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveHighlightedBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHighlightedBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InactiveHighlightedBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveHighlightedBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an STableRow\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an STableRow" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableRowStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectorFocusedBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used as a selector when a row is focused */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used as a selector when a row is focused" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectorFocusedBrush = { "SelectorFocusedBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, SelectorFocusedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectorFocusedBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectorFocusedBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a selected row is active and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a selected row is active and hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHoveredBrush = { "ActiveHoveredBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, ActiveHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHoveredBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHoveredBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a selected row is active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a selected row is active" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveBrush = { "ActiveBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, ActiveBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a selected row is inactive and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a selected row is inactive and hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHoveredBrush = { "InactiveHoveredBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, InactiveHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHoveredBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHoveredBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a selected row is inactive */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a selected row is inactive" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveBrush = { "InactiveBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, InactiveBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_bUseParentRowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If using parent row brushes */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "If using parent row brushes" },
	};
#endif
	void Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_bUseParentRowBrush_SetBit(void* Obj)
	{
		((FTableRowStyle*)Obj)->bUseParentRowBrush = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_bUseParentRowBrush = { "bUseParentRowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTableRowStyle), &Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_bUseParentRowBrush_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_bUseParentRowBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_bUseParentRowBrush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used for the top parent row  */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used for the top parent row" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundBrush = { "ParentRowBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, ParentRowBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundHoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used for the top parent row and row is hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used for the top parent row and row is hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundHoveredBrush = { "ParentRowBackgroundHoveredBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, ParentRowBackgroundHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundHoveredBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundHoveredBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundHoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when an even row is hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when an even row is hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundHoveredBrush = { "EvenRowBackgroundHoveredBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, EvenRowBackgroundHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundHoveredBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundHoveredBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when an even row is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when an even row is in its normal state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundBrush = { "EvenRowBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, EvenRowBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundHoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when an odd row is hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when an odd row is hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundHoveredBrush = { "OddRowBackgroundHoveredBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, OddRowBackgroundHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundHoveredBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundHoveredBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush to used when an odd row is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush to used when an odd row is in its normal state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundBrush = { "OddRowBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, OddRowBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_TextColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Text color used for all rows */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Text color used for all rows" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, TextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_TextColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectedTextColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Text color used for the selected row */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Text color used for the selected row" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectedTextColor = { "SelectedTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, SelectedTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectedTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectedTextColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Above_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to provide feedback that a user can drop above the hovered row. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to provide feedback that a user can drop above the hovered row." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Above = { "DropIndicator_Above", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, DropIndicator_Above), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Above_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Above_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Onto_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to provide feedback that a user can drop onto the hovered row. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to provide feedback that a user can drop onto the hovered row." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Onto = { "DropIndicator_Onto", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, DropIndicator_Onto), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Onto_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Onto_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Below_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to provide feedback that a user can drop below the hovered row. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to provide feedback that a user can drop below the hovered row." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Below = { "DropIndicator_Below", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, DropIndicator_Below), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Below_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Below_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHighlightedBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a highlighted row is active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a highlighted row is active" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHighlightedBrush = { "ActiveHighlightedBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, ActiveHighlightedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHighlightedBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHighlightedBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHighlightedBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a highlighted row is inactive and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a highlighted row is inactive and hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHighlightedBrush = { "InactiveHighlightedBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableRowStyle, InactiveHighlightedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHighlightedBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHighlightedBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTableRowStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectorFocusedBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHoveredBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHoveredBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_bUseParentRowBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundHoveredBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundHoveredBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundHoveredBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectedTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Above,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Onto,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Below,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHighlightedBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHighlightedBrush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"TableRowStyle",
		sizeof(FTableRowStyle),
		alignof(FTableRowStyle),
		Z_Construct_UScriptStruct_FTableRowStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_TableRowStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TableRowStyle.InnerSingleton, Z_Construct_UScriptStruct_FTableRowStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TableRowStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTableColumnHeaderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FTableColumnHeaderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle;
class UScriptStruct* FTableColumnHeaderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableColumnHeaderStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("TableColumnHeaderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTableColumnHeaderStyle>()
{
	return FTableColumnHeaderStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortPrimaryAscendingImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SortPrimaryAscendingImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortPrimaryDescendingImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SortPrimaryDescendingImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortSecondaryAscendingImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SortSecondaryAscendingImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortSecondaryDescendingImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SortSecondaryDescendingImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuDropdownImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuDropdownImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuDropdownNormalBorderBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuDropdownNormalBorderBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuDropdownHoveredBorderBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuDropdownHoveredBorderBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an STableColumnHeader\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an STableColumnHeader" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableColumnHeaderStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryAscendingImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used when a column is primarily sorted in ascending order */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used when a column is primarily sorted in ascending order" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryAscendingImage = { "SortPrimaryAscendingImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, SortPrimaryAscendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryAscendingImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryAscendingImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryDescendingImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used when a column is primarily sorted in descending order */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used when a column is primarily sorted in descending order" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryDescendingImage = { "SortPrimaryDescendingImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, SortPrimaryDescendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryDescendingImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryDescendingImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryAscendingImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used when a column is secondarily sorted in ascending order */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used when a column is secondarily sorted in ascending order" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryAscendingImage = { "SortSecondaryAscendingImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, SortSecondaryAscendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryAscendingImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryAscendingImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryDescendingImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used when a column is secondarily sorted in descending order */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used when a column is secondarily sorted in descending order" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryDescendingImage = { "SortSecondaryDescendingImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, SortSecondaryDescendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryDescendingImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryDescendingImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_NormalBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the header in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the header in its normal state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_NormalBrush = { "NormalBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, NormalBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_NormalBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_NormalBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_HoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the header in its hovered state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the header in its hovered state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_HoveredBrush = { "HoveredBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, HoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_HoveredBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_HoveredBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used for the menu drop-down button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used for the menu drop-down button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownImage = { "MenuDropdownImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, MenuDropdownImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownNormalBorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the menu drop-down border in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the menu drop-down border in its normal state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownNormalBorderBrush = { "MenuDropdownNormalBorderBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, MenuDropdownNormalBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownNormalBorderBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownNormalBorderBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownHoveredBorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the menu drop-down border in its hovered state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the menu drop-down border in its hovered state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownHoveredBorderBrush = { "MenuDropdownHoveredBorderBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, MenuDropdownHoveredBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownHoveredBorderBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownHoveredBorderBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryAscendingImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryDescendingImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryAscendingImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryDescendingImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_NormalBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_HoveredBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownNormalBorderBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownHoveredBorderBrush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"TableColumnHeaderStyle",
		sizeof(FTableColumnHeaderStyle),
		alignof(FTableColumnHeaderStyle),
		Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTableColumnHeaderStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.InnerSingleton, Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHeaderRowStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FHeaderRowStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeaderRowStyle;
class UScriptStruct* FHeaderRowStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeaderRowStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeaderRowStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeaderRowStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("HeaderRowStyle"));
	}
	return Z_Registration_Info_UScriptStruct_HeaderRowStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FHeaderRowStyle>()
{
	return FHeaderRowStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHeaderRowStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColumnStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastColumnStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastColumnStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnSplitterStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColumnSplitterStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitterHandleSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitterHandleSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSeparatorBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalSeparatorBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSeparatorThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalSeparatorThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SHeaderRow\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SHeaderRow" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeaderRowStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style of the normal header row columns */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style of the normal header row columns" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnStyle = { "ColumnStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderRowStyle, ColumnStyle), Z_Construct_UScriptStruct_FTableColumnHeaderStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnStyle_MetaData)) }; // 2656598114
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_LastColumnStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style of the last header row column */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style of the last header row column" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_LastColumnStyle = { "LastColumnStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderRowStyle, LastColumnStyle), Z_Construct_UScriptStruct_FTableColumnHeaderStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_LastColumnStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_LastColumnStyle_MetaData)) }; // 2656598114
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnSplitterStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style of the splitter used between the columns */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style of the splitter used between the columns" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnSplitterStyle = { "ColumnSplitterStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderRowStyle, ColumnSplitterStyle), Z_Construct_UScriptStruct_FSplitterStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnSplitterStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnSplitterStyle_MetaData)) }; // 2511038882
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_SplitterHandleSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Size of the splitter used between the columns */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Size of the splitter used between the columns" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_SplitterHandleSize = { "SplitterHandleSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderRowStyle, SplitterHandleSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_SplitterHandleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_SplitterHandleSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the header row background */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the header row background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderRowStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_BackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_BackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the header row foreground */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used to draw the header row foreground" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderRowStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the splitter between the header and the contents below it*/" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the splitter between the header and the contents below it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorBrush = { "HorizontalSeparatorBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderRowStyle, HorizontalSeparatorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorThickness = { "HorizontalSeparatorThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderRowStyle, HorizontalSeparatorThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorThickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_LastColumnStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnSplitterStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_SplitterHandleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_BackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorThickness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"HeaderRowStyle",
		sizeof(FHeaderRowStyle),
		alignof(FHeaderRowStyle),
		Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeaderRowStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_HeaderRowStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeaderRowStyle.InnerSingleton, Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HeaderRowStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDockTabStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FDockTabStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DockTabStyle;
class UScriptStruct* FDockTabStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DockTabStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DockTabStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDockTabStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("DockTabStyle"));
	}
	return Z_Registration_Info_UScriptStruct_DockTabStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FDockTabStyle>()
{
	return FDockTabStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDockTabStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloseButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorOverlayTabBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOverlayTabBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorOverlayIconBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOverlayIconBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentAreaBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentAreaBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabWellBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabWellBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlapWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlashColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconBorderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IconBorderPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SDockTab\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SDockTab" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDockTabStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_CloseButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used for the close button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used for the close button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_CloseButtonStyle = { "CloseButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, CloseButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_CloseButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_CloseButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when this tab is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when this tab is in its normal state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalBrush = { "NormalBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, NormalBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayTabBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to overlay a given color onto this tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to overlay a given color onto this tab" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayTabBrush = { "ColorOverlayTabBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, ColorOverlayTabBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayTabBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayTabBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayIconBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to overlay a given color onto this tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to overlay a given color onto this tab" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayIconBrush = { "ColorOverlayIconBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, ColorOverlayIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayIconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayIconBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when this tab is in the foreground */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when this tab is in the foreground" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundBrush = { "ForegroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, ForegroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when this tab is hovered over */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when this tab is hovered over" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredBrush = { "HoveredBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, HoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ContentAreaBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used by the SDockingTabStack to draw the content associated with this tab; Documents, Apps, and Tool Panels have different backgrounds */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used by the SDockingTabStack to draw the content associated with this tab; Documents, Apps, and Tool Panels have different backgrounds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ContentAreaBrush = { "ContentAreaBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, ContentAreaBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ContentAreaBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ContentAreaBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabWellBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used by the SDockingTabStack to draw the content associated with this tab; Documents, Apps, and Tool Panels have different backgrounds */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used by the SDockingTabStack to draw the content associated with this tab; Documents, Apps, and Tool Panels have different backgrounds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabWellBrush = { "TabWellBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, TabWellBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabWellBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabWellBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Tab Text Style */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Tab Text Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabTextStyle = { "TabTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, TabTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabTextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding used around this tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding used around this tab" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabPadding = { "TabPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, TabPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Icon size for icons in this tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Icon size for icons in this tab" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, IconSize), Z_Construct_UScriptStruct_FDeprecateSlateVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconSize_MetaData)) }; // 3533773233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_OverlapWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The width that this tab will overlap with side-by-side tabs */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The width that this tab will overlap with side-by-side tabs" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_OverlapWidth = { "OverlapWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, OverlapWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_OverlapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_OverlapWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_FlashColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used when flashing this tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used when flashing this tab" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_FlashColor = { "FlashColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, FlashColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_FlashColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_FlashColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when the tab is not hovered, pressed, active or in the foreground */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when the tab is not hovered, pressed, active or in the foreground" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalForegroundColor = { "NormalForegroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, NormalForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredForegroundColor = { "HoveredForegroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, HoveredForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ActiveForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when Active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when Active" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ActiveForegroundColor = { "ActiveForegroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, ActiveForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ActiveForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ActiveForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when this tab is the Foreground tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when this tab is the Foreground tab" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundForegroundColor = { "ForegroundForegroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, ForegroundForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconBorderPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The padding applied to the border around the tab icon */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The padding applied to the border around the tab icon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconBorderPadding = { "IconBorderPadding", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDockTabStyle, IconBorderPadding), METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconBorderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconBorderPadding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDockTabStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_CloseButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayTabBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayIconBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ContentAreaBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabWellBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_OverlapWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_FlashColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ActiveForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconBorderPadding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"DockTabStyle",
		sizeof(FDockTabStyle),
		alignof(FDockTabStyle),
		Z_Construct_UScriptStruct_FDockTabStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDockTabStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDockTabStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_DockTabStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DockTabStyle.InnerSingleton, Z_Construct_UScriptStruct_FDockTabStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DockTabStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FScrollBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FScrollBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScrollBoxStyle;
class UScriptStruct* FScrollBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScrollBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScrollBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScrollBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ScrollBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ScrollBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FScrollBoxStyle>()
{
	return FScrollBoxStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScrollBoxStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopShadowBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TopShadowBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomShadowBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BottomShadowBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftShadowBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftShadowBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightShadowBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightShadowBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalScrolledContentPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalScrolledContentPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalScrolledContentPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalScrolledContentPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SScrollBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SScrollBox" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScrollBoxStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BarThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BarThickness = { "BarThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBoxStyle, BarThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BarThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BarThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_TopShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the top shadow of a scrollbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the top shadow of a scrollbox" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_TopShadowBrush = { "TopShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBoxStyle, TopShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_TopShadowBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_TopShadowBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BottomShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the bottom shadow of a scrollbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the bottom shadow of a scrollbox" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BottomShadowBrush = { "BottomShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBoxStyle, BottomShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BottomShadowBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BottomShadowBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_LeftShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the left shadow of a scrollbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the left shadow of a scrollbox" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_LeftShadowBrush = { "LeftShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBoxStyle, LeftShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_LeftShadowBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_LeftShadowBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_RightShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the right shadow of a scrollbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the right shadow of a scrollbox" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_RightShadowBrush = { "RightShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBoxStyle, RightShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_RightShadowBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_RightShadowBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_HorizontalScrolledContentPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding scroll panel that presents the scrolled content */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding scroll panel that presents the scrolled content" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_HorizontalScrolledContentPadding = { "HorizontalScrolledContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBoxStyle, HorizontalScrolledContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_HorizontalScrolledContentPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_HorizontalScrolledContentPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_VerticalScrolledContentPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding scroll panel that presents the scrolled content */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding scroll panel that presents the scrolled content" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_VerticalScrolledContentPadding = { "VerticalScrolledContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBoxStyle, VerticalScrolledContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_VerticalScrolledContentPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_VerticalScrolledContentPadding_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BarThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_TopShadowBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BottomShadowBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_LeftShadowBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_RightShadowBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_HorizontalScrolledContentPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_VerticalScrolledContentPadding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ScrollBoxStyle",
		sizeof(FScrollBoxStyle),
		alignof(FScrollBoxStyle),
		Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_ScrollBoxStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScrollBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScrollBoxStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FScrollBorderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FScrollBorderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScrollBorderStyle;
class UScriptStruct* FScrollBorderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScrollBorderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScrollBorderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScrollBorderStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ScrollBorderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ScrollBorderStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FScrollBorderStyle>()
{
	return FScrollBorderStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScrollBorderStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopShadowBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TopShadowBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomShadowBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BottomShadowBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Represents the appearance of an FScrollBorderStyle\n*/" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an FScrollBorderStyle" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScrollBorderStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_TopShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the top shadow of a scrollborder */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the top shadow of a scrollborder" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_TopShadowBrush = { "TopShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBorderStyle, TopShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_TopShadowBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_TopShadowBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_BottomShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the bottom shadow of a scrollborder */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the bottom shadow of a scrollborder" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_BottomShadowBrush = { "BottomShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScrollBorderStyle, BottomShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_BottomShadowBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_BottomShadowBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_TopShadowBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_BottomShadowBrush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ScrollBorderStyle",
		sizeof(FScrollBorderStyle),
		alignof(FScrollBorderStyle),
		Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScrollBorderStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_ScrollBorderStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScrollBorderStyle.InnerSingleton, Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScrollBorderStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWindowStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FWindowStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WindowStyle;
class UScriptStruct* FWindowStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WindowStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WindowStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWindowStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("WindowStyle"));
	}
	return Z_Registration_Info_UScriptStruct_WindowStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FWindowStyle>()
{
	return FWindowStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWindowStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimizeButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimizeButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximizeButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaximizeButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestoreButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RestoreButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloseButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TitleTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTitleBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveTitleBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InactiveTitleBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveTitleBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashTitleBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlashTitleBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowCornerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WindowCornerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SWindow\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SWindow" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWindowStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWindowStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MinimizeButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used to draw the window minimize button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used to draw the window minimize button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MinimizeButtonStyle = { "MinimizeButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, MinimizeButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MinimizeButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MinimizeButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MaximizeButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used to draw the window maximize button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used to draw the window maximize button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MaximizeButtonStyle = { "MaximizeButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, MaximizeButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MaximizeButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MaximizeButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_RestoreButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used to draw the window restore button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used to draw the window restore button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_RestoreButtonStyle = { "RestoreButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, RestoreButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_RestoreButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_RestoreButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_CloseButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used to draw the window close button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used to draw the window close button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_CloseButtonStyle = { "CloseButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, CloseButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_CloseButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_CloseButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_TitleTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used to draw the window title text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used to draw the window title text" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_TitleTextStyle = { "TitleTextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, TitleTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_TitleTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_TitleTextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ActiveTitleBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window title area when the window is active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window title area when the window is active" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ActiveTitleBrush = { "ActiveTitleBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, ActiveTitleBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ActiveTitleBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ActiveTitleBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_InactiveTitleBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window title area when the window is inactive */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window title area when the window is inactive" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_InactiveTitleBrush = { "InactiveTitleBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, InactiveTitleBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_InactiveTitleBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_InactiveTitleBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_FlashTitleBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window title area when the window is flashing */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window title area when the window is flashing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_FlashTitleBrush = { "FlashTitleBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, FlashTitleBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_FlashTitleBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_FlashTitleBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the window background */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used to draw the window background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window outline */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window outline" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineBrush = { "OutlineBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, OutlineBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the window outline */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used to draw the window outline" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, OutlineColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window border */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window border" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderBrush = { "BorderBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, BorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the window border */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used to draw the window border" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, BorderColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window background */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ChildBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the background of child windows */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the background of child windows" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ChildBackgroundBrush = { "ChildBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, ChildBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ChildBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ChildBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_WindowCornerRadius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Window corner rounding.  If this value is <= 0 no rounding will occur.   Used for regular, non-maximized windows only (not tool-tips or decorators.) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Window corner rounding.  If this value is <= 0 no rounding will occur.   Used for regular, non-maximized windows only (not tool-tips or decorators.)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_WindowCornerRadius = { "WindowCornerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, WindowCornerRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_WindowCornerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_WindowCornerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Window corner rounding.  If this value is <= 0 no rounding will occur.   Used for regular, non-maximized windows only (not tool-tips or decorators.) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Window corner rounding.  If this value is <= 0 no rounding will occur.   Used for regular, non-maximized windows only (not tool-tips or decorators.)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWindowStyle, BorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderPadding_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWindowStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MinimizeButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MaximizeButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_RestoreButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_CloseButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_TitleTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ActiveTitleBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_InactiveTitleBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_FlashTitleBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ChildBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_WindowCornerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderPadding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWindowStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"WindowStyle",
		sizeof(FWindowStyle),
		alignof(FWindowStyle),
		Z_Construct_UScriptStruct_FWindowStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWindowStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_WindowStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WindowStyle.InnerSingleton, Z_Construct_UScriptStruct_FWindowStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WindowStyle.InnerSingleton;
	}
	void USlateTypes::StaticRegisterNativesUSlateTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateTypes);
	UClass* Z_Construct_UClass_USlateTypes_NoRegister()
	{
		return USlateTypes::StaticClass();
	}
	struct Z_Construct_UClass_USlateTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** HACK: We need a UClass here or UHT will complain. */" },
		{ "IncludePath", "Styling/SlateTypes.h" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "HACK: We need a UClass here or UHT will complain." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateTypes_Statics::ClassParams = {
		&USlateTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateTypes()
	{
		if (!Z_Registration_Info_UClass_USlateTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateTypes.OuterSingleton, Z_Construct_UClass_USlateTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateTypes.OuterSingleton;
	}
	template<> SLATECORE_API UClass* StaticClass<USlateTypes>()
	{
		return USlateTypes::StaticClass();
	}
	USlateTypes::USlateTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateTypes);
	USlateTypes::~USlateTypes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::EnumInfo[] = {
		{ EConsumeMouseWheel_StaticEnum, TEXT("EConsumeMouseWheel"), &Z_Registration_Info_UEnum_EConsumeMouseWheel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3844272617U) },
		{ ESlateParentWindowSearchMethod_StaticEnum, TEXT("ESlateParentWindowSearchMethod"), &Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2639708626U) },
		{ ESlateCheckBoxType_StaticEnum, TEXT("ESlateCheckBoxType"), &Z_Registration_Info_UEnum_ESlateCheckBoxType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3077855935U) },
		{ ECheckBoxState_StaticEnum, TEXT("ECheckBoxState"), &Z_Registration_Info_UEnum_ECheckBoxState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1662204813U) },
		{ ETextOverflowPolicy_StaticEnum, TEXT("ETextOverflowPolicy"), &Z_Registration_Info_UEnum_ETextOverflowPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1604726165U) },
		{ ETextTransformPolicy_StaticEnum, TEXT("ETextTransformPolicy"), &Z_Registration_Info_UEnum_ETextTransformPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 883314779U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::ScriptStructInfo[] = {
		{ FCheckBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewStructOps, TEXT("CheckBoxStyle"), &Z_Registration_Info_UScriptStruct_CheckBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCheckBoxStyle), 1946304471U) },
		{ FTextBlockStyle::StaticStruct, Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewStructOps, TEXT("TextBlockStyle"), &Z_Registration_Info_UScriptStruct_TextBlockStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextBlockStyle), 622949925U) },
		{ FButtonStyle::StaticStruct, Z_Construct_UScriptStruct_FButtonStyle_Statics::NewStructOps, TEXT("ButtonStyle"), &Z_Registration_Info_UScriptStruct_ButtonStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FButtonStyle), 2024050934U) },
		{ FComboButtonStyle::StaticStruct, Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewStructOps, TEXT("ComboButtonStyle"), &Z_Registration_Info_UScriptStruct_ComboButtonStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboButtonStyle), 3302369615U) },
		{ FComboBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewStructOps, TEXT("ComboBoxStyle"), &Z_Registration_Info_UScriptStruct_ComboBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboBoxStyle), 3435964422U) },
		{ FHyperlinkStyle::StaticStruct, Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewStructOps, TEXT("HyperlinkStyle"), &Z_Registration_Info_UScriptStruct_HyperlinkStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHyperlinkStyle), 2878765108U) },
		{ FEditableTextStyle::StaticStruct, Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewStructOps, TEXT("EditableTextStyle"), &Z_Registration_Info_UScriptStruct_EditableTextStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditableTextStyle), 2363878413U) },
		{ FScrollBarStyle::StaticStruct, Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewStructOps, TEXT("ScrollBarStyle"), &Z_Registration_Info_UScriptStruct_ScrollBarStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScrollBarStyle), 2161279079U) },
		{ FEditableTextBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewStructOps, TEXT("EditableTextBoxStyle"), &Z_Registration_Info_UScriptStruct_EditableTextBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditableTextBoxStyle), 255857817U) },
		{ FInlineEditableTextBlockStyle::StaticStruct, Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewStructOps, TEXT("InlineEditableTextBlockStyle"), &Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInlineEditableTextBlockStyle), 2795302943U) },
		{ FProgressBarStyle::StaticStruct, Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewStructOps, TEXT("ProgressBarStyle"), &Z_Registration_Info_UScriptStruct_ProgressBarStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressBarStyle), 3431683467U) },
		{ FExpandableAreaStyle::StaticStruct, Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewStructOps, TEXT("ExpandableAreaStyle"), &Z_Registration_Info_UScriptStruct_ExpandableAreaStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpandableAreaStyle), 360508616U) },
		{ FSearchBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewStructOps, TEXT("SearchBoxStyle"), &Z_Registration_Info_UScriptStruct_SearchBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchBoxStyle), 295921845U) },
		{ FSliderStyle::StaticStruct, Z_Construct_UScriptStruct_FSliderStyle_Statics::NewStructOps, TEXT("SliderStyle"), &Z_Registration_Info_UScriptStruct_SliderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSliderStyle), 4127039365U) },
		{ FVolumeControlStyle::StaticStruct, Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewStructOps, TEXT("VolumeControlStyle"), &Z_Registration_Info_UScriptStruct_VolumeControlStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumeControlStyle), 2216581338U) },
		{ FInlineTextImageStyle::StaticStruct, Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewStructOps, TEXT("InlineTextImageStyle"), &Z_Registration_Info_UScriptStruct_InlineTextImageStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInlineTextImageStyle), 508661461U) },
		{ FSpinBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewStructOps, TEXT("SpinBoxStyle"), &Z_Registration_Info_UScriptStruct_SpinBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpinBoxStyle), 1730320122U) },
		{ FSplitterStyle::StaticStruct, Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewStructOps, TEXT("SplitterStyle"), &Z_Registration_Info_UScriptStruct_SplitterStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplitterStyle), 2511038882U) },
		{ FTableViewStyle::StaticStruct, Z_Construct_UScriptStruct_FTableViewStyle_Statics::NewStructOps, TEXT("TableViewStyle"), &Z_Registration_Info_UScriptStruct_TableViewStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTableViewStyle), 2891893037U) },
		{ FTableRowStyle::StaticStruct, Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewStructOps, TEXT("TableRowStyle"), &Z_Registration_Info_UScriptStruct_TableRowStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTableRowStyle), 129873581U) },
		{ FTableColumnHeaderStyle::StaticStruct, Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewStructOps, TEXT("TableColumnHeaderStyle"), &Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTableColumnHeaderStyle), 2656598114U) },
		{ FHeaderRowStyle::StaticStruct, Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewStructOps, TEXT("HeaderRowStyle"), &Z_Registration_Info_UScriptStruct_HeaderRowStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeaderRowStyle), 4072558022U) },
		{ FDockTabStyle::StaticStruct, Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewStructOps, TEXT("DockTabStyle"), &Z_Registration_Info_UScriptStruct_DockTabStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDockTabStyle), 1373348475U) },
		{ FScrollBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewStructOps, TEXT("ScrollBoxStyle"), &Z_Registration_Info_UScriptStruct_ScrollBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScrollBoxStyle), 3926364971U) },
		{ FScrollBorderStyle::StaticStruct, Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewStructOps, TEXT("ScrollBorderStyle"), &Z_Registration_Info_UScriptStruct_ScrollBorderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScrollBorderStyle), 3255021002U) },
		{ FWindowStyle::StaticStruct, Z_Construct_UScriptStruct_FWindowStyle_Statics::NewStructOps, TEXT("WindowStyle"), &Z_Registration_Info_UScriptStruct_WindowStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWindowStyle), 1390682585U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateTypes, USlateTypes::StaticClass, TEXT("USlateTypes"), &Z_Registration_Info_UClass_USlateTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateTypes), 3996953061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_1503806817(TEXT("/Script/SlateCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
