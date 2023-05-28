// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonRichTextBlock.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonRichTextBlock() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextScrollStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERichTextInlineIconDisplayMode;
	static UEnum* ERichTextInlineIconDisplayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERichTextInlineIconDisplayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERichTextInlineIconDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("ERichTextInlineIconDisplayMode"));
		}
		return Z_Registration_Info_UEnum_ERichTextInlineIconDisplayMode.OuterSingleton;
	}
	template<> COMMONUI_API UEnum* StaticEnum<ERichTextInlineIconDisplayMode>()
	{
		return ERichTextInlineIconDisplayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode_Statics::Enumerators[] = {
		{ "ERichTextInlineIconDisplayMode::IconOnly", (int64)ERichTextInlineIconDisplayMode::IconOnly },
		{ "ERichTextInlineIconDisplayMode::TextOnly", (int64)ERichTextInlineIconDisplayMode::TextOnly },
		{ "ERichTextInlineIconDisplayMode::IconAndText", (int64)ERichTextInlineIconDisplayMode::IconAndText },
		{ "ERichTextInlineIconDisplayMode::MAX", (int64)ERichTextInlineIconDisplayMode::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Various ways that we display inline icon that have an icon-name association\n" },
		{ "IconAndText.Comment", "// Show both the icon and the text - use whenever there is space\n" },
		{ "IconAndText.Name", "ERichTextInlineIconDisplayMode::IconAndText" },
		{ "IconAndText.ToolTip", "Show both the icon and the text - use whenever there is space" },
		{ "IconOnly.Comment", "// Only show the icon - use when space is limited\n" },
		{ "IconOnly.Name", "ERichTextInlineIconDisplayMode::IconOnly" },
		{ "IconOnly.ToolTip", "Only show the icon - use when space is limited" },
		{ "MAX.Name", "ERichTextInlineIconDisplayMode::MAX" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
		{ "TextOnly.Comment", "// Only show the text - use seldom if ever\n" },
		{ "TextOnly.Name", "ERichTextInlineIconDisplayMode::TextOnly" },
		{ "TextOnly.ToolTip", "Only show the text - use seldom if ever" },
		{ "ToolTip", "Various ways that we display inline icon that have an icon-name association" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		"ERichTextInlineIconDisplayMode",
		"ERichTextInlineIconDisplayMode",
		Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode()
	{
		if (!Z_Registration_Info_UEnum_ERichTextInlineIconDisplayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERichTextInlineIconDisplayMode.InnerSingleton, Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERichTextInlineIconDisplayMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UCommonRichTextBlock::execSetScrollingEnabled)
	{
		P_GET_UBOOL(Z_Param_bInIsScrollingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrollingEnabled(Z_Param_bInIsScrollingEnabled);
		P_NATIVE_END;
	}
	void UCommonRichTextBlock::StaticRegisterNativesUCommonRichTextBlock()
	{
		UClass* Class = UCommonRichTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetScrollingEnabled", &UCommonRichTextBlock::execSetScrollingEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics
	{
		struct CommonRichTextBlock_eventSetScrollingEnabled_Parms
		{
			bool bInIsScrollingEnabled;
		};
		static void NewProp_bInIsScrollingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsScrollingEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled_SetBit(void* Obj)
	{
		((CommonRichTextBlock_eventSetScrollingEnabled_Parms*)Obj)->bInIsScrollingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled = { "bInIsScrollingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonRichTextBlock_eventSetScrollingEnabled_Parms), &Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Rich Text|Scroll Style" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRichTextBlock, nullptr, "SetScrollingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::CommonRichTextBlock_eventSetScrollingEnabled_Parms), Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonRichTextBlock);
	UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister()
	{
		return UCommonRichTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UCommonRichTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InlineIconDisplayMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InlineIconDisplayMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InlineIconDisplayMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTintInlineIcon_MetaData[];
#endif
		static void NewProp_bTintInlineIcon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTintInlineIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextStyleOverrideClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultTextStyleOverrideClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileTextBlockScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MobileTextBlockScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ScrollStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsScrollingEnabled_MetaData[];
#endif
		static void NewProp_bIsScrollingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScrollingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAllCaps_MetaData[];
#endif
		static void NewProp_bDisplayAllCaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAllCaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCollapseWithEmptyText_MetaData[];
#endif
		static void NewProp_bAutoCollapseWithEmptyText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCollapseWithEmptyText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonRichTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonRichTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonRichTextBlock_SetScrollingEnabled, "SetScrollingEnabled" }, // 315167807
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Text block that supports custom scaling for mobile platforms, with option to only show icons if space is sparse.\n */" },
		{ "IncludePath", "CommonRichTextBlock.h" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
		{ "ToolTip", "Text block that supports custom scaling for mobile platforms, with option to only show icons if space is sparse." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode_MetaData[] = {
		{ "Category", "InlineIcon" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode = { "InlineIconDisplayMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonRichTextBlock, InlineIconDisplayMode), Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode_MetaData)) }; // 1774371271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon_MetaData[] = {
		{ "Category", "InlineIcon" },
		{ "Comment", "/** Toggle it on if the text color should also tint the inline icons. */" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
		{ "ToolTip", "Toggle it on if the text color should also tint the inline icons." },
	};
#endif
	void Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon_SetBit(void* Obj)
	{
		((UCommonRichTextBlock*)Obj)->bTintInlineIcon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon = { "bTintInlineIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonRichTextBlock), &Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_DefaultTextStyleOverrideClass_MetaData[] = {
		{ "Category", "Appearance" },
		{ "EditCondition", "bOverrideDefaultStyle" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_DefaultTextStyleOverrideClass = { "DefaultTextStyleOverrideClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonRichTextBlock, DefaultTextStyleOverrideClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_DefaultTextStyleOverrideClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_DefaultTextStyleOverrideClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_MobileTextBlockScale_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Mobile font size multiplier. Activated by default on mobile. See CVar Mobile_PreviewFontSize */" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
		{ "ToolTip", "Mobile font size multiplier. Activated by default on mobile. See CVar Mobile_PreviewFontSize" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_MobileTextBlockScale = { "MobileTextBlockScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonRichTextBlock, MobileTextBlockScale), METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_MobileTextBlockScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_MobileTextBlockScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_ScrollStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Appearance" },
		{ "Comment", "/** References the scroll style asset to use, no reference disables scrolling*/" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
		{ "ToolTip", "References the scroll style asset to use, no reference disables scrolling" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_ScrollStyle = { "ScrollStyle", nullptr, (EPropertyFlags)0x0045000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonRichTextBlock, ScrollStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextScrollStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_ScrollStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_ScrollStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bIsScrollingEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Appearance" },
		{ "Comment", "/** If scrolling is enabled/disabled initially, this can be updated in blueprint */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
		{ "ToolTip", "If scrolling is enabled/disabled initially, this can be updated in blueprint" },
	};
#endif
	void Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bIsScrollingEnabled_SetBit(void* Obj)
	{
		((UCommonRichTextBlock*)Obj)->bIsScrollingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bIsScrollingEnabled = { "bIsScrollingEnabled", nullptr, (EPropertyFlags)0x0041000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonRichTextBlock), &Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bIsScrollingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bIsScrollingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bIsScrollingEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData[] = {
		{ "Comment", "/** True to always display text in ALL CAPS */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bDisplayAllCaps is deprecated. Please use TextTransformPolicy instead." },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
		{ "ToolTip", "True to always display text in ALL CAPS" },
	};
#endif
	void Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps_SetBit(void* Obj)
	{
		((UCommonRichTextBlock*)Obj)->bDisplayAllCaps_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps = { "bDisplayAllCaps", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonRichTextBlock), &Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Appearance" },
		{ "Comment", "/** True to automatically collapse this rich text block when set to display an empty string. Conversely, will be SelfHitTestInvisible when showing a non-empty string. */" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
		{ "ToolTip", "True to automatically collapse this rich text block when set to display an empty string. Conversely, will be SelfHitTestInvisible when showing a non-empty string." },
	};
#endif
	void Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_SetBit(void* Obj)
	{
		((UCommonRichTextBlock*)Obj)->bAutoCollapseWithEmptyText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText = { "bAutoCollapseWithEmptyText", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonRichTextBlock), &Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonRichTextBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_DefaultTextStyleOverrideClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_MobileTextBlockScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_ScrollStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bIsScrollingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonRichTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonRichTextBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonRichTextBlock_Statics::ClassParams = {
		&UCommonRichTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonRichTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonRichTextBlock()
	{
		if (!Z_Registration_Info_UClass_UCommonRichTextBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonRichTextBlock.OuterSingleton, Z_Construct_UClass_UCommonRichTextBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonRichTextBlock.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonRichTextBlock>()
	{
		return UCommonRichTextBlock::StaticClass();
	}
	UCommonRichTextBlock::UCommonRichTextBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonRichTextBlock);
	UCommonRichTextBlock::~UCommonRichTextBlock() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonRichTextBlock)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_Statics::EnumInfo[] = {
		{ ERichTextInlineIconDisplayMode_StaticEnum, TEXT("ERichTextInlineIconDisplayMode"), &Z_Registration_Info_UEnum_ERichTextInlineIconDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1774371271U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonRichTextBlock, UCommonRichTextBlock::StaticClass, TEXT("UCommonRichTextBlock"), &Z_Registration_Info_UClass_UCommonRichTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonRichTextBlock), 590564397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_4214673675(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
