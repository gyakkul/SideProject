// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonTextBlock.h"
#include "Fonts/SlateFontInfo.h"
#include "Layout/Margin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonTextBlock() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheet_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextScrollStyle();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextScrollStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UMG_API UClass* Z_Construct_UClass_UTextBlock();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonTextStyle::execGetStrikeBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_OutStrikeBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetStrikeBrush(Z_Param_Out_OutStrikeBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextStyle::execGetShadowColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetShadowColor(Z_Param_Out_OutColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextStyle::execGetShadowOffset)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutShadowOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetShadowOffset(Z_Param_Out_OutShadowOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextStyle::execGetLineHeightPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLineHeightPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextStyle::execGetMargin)
	{
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutMargin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMargin(Z_Param_Out_OutMargin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextStyle::execGetColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetColor(Z_Param_Out_OutColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextStyle::execGetFont)
	{
		P_GET_STRUCT_REF(FSlateFontInfo,Z_Param_Out_OutFont);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFont(Z_Param_Out_OutFont);
		P_NATIVE_END;
	}
	void UCommonTextStyle::StaticRegisterNativesUCommonTextStyle()
	{
		UClass* Class = UCommonTextStyle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColor", &UCommonTextStyle::execGetColor },
			{ "GetFont", &UCommonTextStyle::execGetFont },
			{ "GetLineHeightPercentage", &UCommonTextStyle::execGetLineHeightPercentage },
			{ "GetMargin", &UCommonTextStyle::execGetMargin },
			{ "GetShadowColor", &UCommonTextStyle::execGetShadowColor },
			{ "GetShadowOffset", &UCommonTextStyle::execGetShadowOffset },
			{ "GetStrikeBrush", &UCommonTextStyle::execGetStrikeBrush },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics
	{
		struct CommonTextStyle_eventGetColor_Parms
		{
			FLinearColor OutColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::NewProp_OutColor = { "OutColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetColor_Parms, OutColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::NewProp_OutColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text Style|Getters" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, nullptr, "GetColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::CommonTextStyle_eventGetColor_Parms), Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics
	{
		struct CommonTextStyle_eventGetFont_Parms
		{
			FSlateFontInfo OutFont;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutFont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::NewProp_OutFont = { "OutFont", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetFont_Parms, OutFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) }; // 192883377
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::NewProp_OutFont,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text Style|Getters" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, nullptr, "GetFont", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::CommonTextStyle_eventGetFont_Parms), Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics
	{
		struct CommonTextStyle_eventGetLineHeightPercentage_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetLineHeightPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text Style|Getters" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, nullptr, "GetLineHeightPercentage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::CommonTextStyle_eventGetLineHeightPercentage_Parms), Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics
	{
		struct CommonTextStyle_eventGetMargin_Parms
		{
			FMargin OutMargin;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMargin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::NewProp_OutMargin = { "OutMargin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetMargin_Parms, OutMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::NewProp_OutMargin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text Style|Getters" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, nullptr, "GetMargin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::CommonTextStyle_eventGetMargin_Parms), Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetMargin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics
	{
		struct CommonTextStyle_eventGetShadowColor_Parms
		{
			FLinearColor OutColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::NewProp_OutColor = { "OutColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetShadowColor_Parms, OutColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::NewProp_OutColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text Style|Getters" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, nullptr, "GetShadowColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::CommonTextStyle_eventGetShadowColor_Parms), Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetShadowColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics
	{
		struct CommonTextStyle_eventGetShadowOffset_Parms
		{
			FVector2D OutShadowOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutShadowOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::NewProp_OutShadowOffset = { "OutShadowOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetShadowOffset_Parms, OutShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::NewProp_OutShadowOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text Style|Getters" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, nullptr, "GetShadowOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::CommonTextStyle_eventGetShadowOffset_Parms), Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics
	{
		struct CommonTextStyle_eventGetStrikeBrush_Parms
		{
			FSlateBrush OutStrikeBrush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStrikeBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::NewProp_OutStrikeBrush = { "OutStrikeBrush", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetStrikeBrush_Parms, OutStrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::NewProp_OutStrikeBrush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text Style|Getters" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, nullptr, "GetStrikeBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::CommonTextStyle_eventGetStrikeBrush_Parms), Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonTextStyle);
	UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister()
	{
		return UCommonTextStyle::StaticClass();
	}
	struct Z_Construct_UClass_UCommonTextStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsesDropShadow_MetaData[];
#endif
		static void NewProp_bUsesDropShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesDropShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrikeBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrikeBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineHeightPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineHeightPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonTextStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonTextStyle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonTextStyle_GetColor, "GetColor" }, // 2817942724
		{ &Z_Construct_UFunction_UCommonTextStyle_GetFont, "GetFont" }, // 371740432
		{ &Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage, "GetLineHeightPercentage" }, // 1265810081
		{ &Z_Construct_UFunction_UCommonTextStyle_GetMargin, "GetMargin" }, // 1914068045
		{ &Z_Construct_UFunction_UCommonTextStyle_GetShadowColor, "GetShadowColor" }, // 1576407832
		{ &Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset, "GetShadowOffset" }, // 548757231
		{ &Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush, "GetStrikeBrush" }, // 2914086228
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "Comment", "/* \n * ---- All properties must be EditDefaultsOnly, BlueprintReadOnly !!! -----\n * We return the CDO to blueprints, so we cannot allow any changes (blueprint doesn't support const variables)\n */" },
		{ "IncludePath", "CommonTextBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "* ---- All properties must be EditDefaultsOnly, BlueprintReadOnly !!! -----\n* We return the CDO to blueprints, so we cannot allow any changes (blueprint doesn't support const variables)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Font" },
		{ "Comment", "/** The font to apply at each size */" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "The font to apply at each size" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Font_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The color of the text */" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "The color of the text" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextStyle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow_MetaData[] = {
		{ "Category", "Shadow" },
		{ "Comment", "/** Whether or not the style uses a drop shadow */" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "Whether or not the style uses a drop shadow" },
	};
#endif
	void Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow_SetBit(void* Obj)
	{
		((UCommonTextStyle*)Obj)->bUsesDropShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow = { "bUsesDropShadow", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonTextStyle), &Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Shadow" },
		{ "Comment", "/** The offset of the drop shadow at each size */" },
		{ "EditCondition", "bUsesDropShadow" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "The offset of the drop shadow at each size" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextStyle, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowColor_MetaData[] = {
		{ "Category", "Shadow" },
		{ "Comment", "/** The drop shadow color */" },
		{ "EditCondition", "bUsesDropShadow" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "The drop shadow color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowColor = { "ShadowColor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextStyle, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The amount of blank space left around the edges of text area at each size */" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "The amount of blank space left around the edges of text area at each size" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextStyle, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Margin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_StrikeBrush_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The brush used to draw an strike through the text (if any) */" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "The brush used to draw an strike through the text (if any)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_StrikeBrush = { "StrikeBrush", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextStyle, StrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_StrikeBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_StrikeBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_LineHeightPercentage_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The amount to scale each lines height by at each size */" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "The amount to scale each lines height by at each size" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_LineHeightPercentage = { "LineHeightPercentage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextStyle, LineHeightPercentage), METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_LineHeightPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_LineHeightPercentage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonTextStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Margin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_StrikeBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_LineHeightPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonTextStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonTextStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonTextStyle_Statics::ClassParams = {
		&UCommonTextStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonTextStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonTextStyle()
	{
		if (!Z_Registration_Info_UClass_UCommonTextStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonTextStyle.OuterSingleton, Z_Construct_UClass_UCommonTextStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonTextStyle.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonTextStyle>()
	{
		return UCommonTextStyle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonTextStyle);
	UCommonTextStyle::~UCommonTextStyle() {}
	void UCommonTextScrollStyle::StaticRegisterNativesUCommonTextScrollStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonTextScrollStyle);
	UClass* Z_Construct_UClass_UCommonTextScrollStyle_NoRegister()
	{
		return UCommonTextScrollStyle::StaticClass();
	}
	struct Z_Construct_UClass_UCommonTextScrollStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeInDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonTextScrollStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextScrollStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "Comment", "/* \n * ---- All properties must be EditDefaultsOnly, BlueprintReadOnly !!! -----\n * We return the CDO to blueprints, so we cannot allow any changes (blueprint doesn't support const variables)\n */" },
		{ "IncludePath", "CommonTextBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "* ---- All properties must be EditDefaultsOnly, BlueprintReadOnly !!! -----\n* We return the CDO to blueprints, so we cannot allow any changes (blueprint doesn't support const variables)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextScrollStyle, Speed), METADATA_PARAMS(Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_StartDelay_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextScrollStyle, StartDelay), METADATA_PARAMS(Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_StartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_StartDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_EndDelay_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_EndDelay = { "EndDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextScrollStyle, EndDelay), METADATA_PARAMS(Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_EndDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_EndDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_FadeInDelay_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_FadeInDelay = { "FadeInDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextScrollStyle, FadeInDelay), METADATA_PARAMS(Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_FadeInDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_FadeInDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_FadeOutDelay_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_FadeOutDelay = { "FadeOutDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextScrollStyle, FadeOutDelay), METADATA_PARAMS(Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_FadeOutDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_FadeOutDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonTextScrollStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_StartDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_EndDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_FadeInDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextScrollStyle_Statics::NewProp_FadeOutDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonTextScrollStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonTextScrollStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonTextScrollStyle_Statics::ClassParams = {
		&UCommonTextScrollStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonTextScrollStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextScrollStyle_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonTextScrollStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextScrollStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonTextScrollStyle()
	{
		if (!Z_Registration_Info_UClass_UCommonTextScrollStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonTextScrollStyle.OuterSingleton, Z_Construct_UClass_UCommonTextScrollStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonTextScrollStyle.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonTextScrollStyle>()
	{
		return UCommonTextScrollStyle::StaticClass();
	}
	UCommonTextScrollStyle::UCommonTextScrollStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonTextScrollStyle);
	UCommonTextScrollStyle::~UCommonTextScrollStyle() {}
	DEFINE_FUNCTION(UCommonTextBlock::execSetScrollingEnabled)
	{
		P_GET_UBOOL(Z_Param_bInIsScrollingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrollingEnabled(Z_Param_bInIsScrollingEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextBlock::execResetScrollState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetScrollState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextBlock::execSetMobileFontSizeMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMobileFontSizeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMobileFontSizeMultiplier(Z_Param_InMobileFontSizeMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextBlock::execGetMobileFontSizeMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMobileFontSizeMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextBlock::execSetMargin)
	{
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_InMargin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMargin(Z_Param_Out_InMargin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextBlock::execGetMargin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMargin*)Z_Param__Result=P_THIS->GetMargin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextBlock::execSetStyle)
	{
		P_GET_OBJECT(UClass,Z_Param_InStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStyle(Z_Param_InStyle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextBlock::execSetLineHeightPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLineHeightPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLineHeightPercentage(Z_Param_InLineHeightPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextBlock::execSetTextCase)
	{
		P_GET_UBOOL(Z_Param_bUseAllCaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextCase(Z_Param_bUseAllCaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTextBlock::execSetWrapTextWidth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InWrapTextAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWrapTextWidth(Z_Param_InWrapTextAt);
		P_NATIVE_END;
	}
	void UCommonTextBlock::GetMobileFontSizeMultiplier_WrapperImpl(const void* Object, void* OutValue)
	{
		const UCommonTextBlock* Obj = (const UCommonTextBlock*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetMobileFontSizeMultiplier();
	}
	void UCommonTextBlock::SetMobileFontSizeMultiplier_WrapperImpl(void* Object, const void* InValue)
	{
		UCommonTextBlock* Obj = (UCommonTextBlock*)Object;
		float& Value = *(float*)InValue;
		Obj->SetMobileFontSizeMultiplier(Value);
	}
	void UCommonTextBlock::StaticRegisterNativesUCommonTextBlock()
	{
		UClass* Class = UCommonTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMargin", &UCommonTextBlock::execGetMargin },
			{ "GetMobileFontSizeMultiplier", &UCommonTextBlock::execGetMobileFontSizeMultiplier },
			{ "ResetScrollState", &UCommonTextBlock::execResetScrollState },
			{ "SetLineHeightPercentage", &UCommonTextBlock::execSetLineHeightPercentage },
			{ "SetMargin", &UCommonTextBlock::execSetMargin },
			{ "SetMobileFontSizeMultiplier", &UCommonTextBlock::execSetMobileFontSizeMultiplier },
			{ "SetScrollingEnabled", &UCommonTextBlock::execSetScrollingEnabled },
			{ "SetStyle", &UCommonTextBlock::execSetStyle },
			{ "SetTextCase", &UCommonTextBlock::execSetTextCase },
			{ "SetWrapTextWidth", &UCommonTextBlock::execSetWrapTextWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics
	{
		struct CommonTextBlock_eventGetMargin_Parms
		{
			FMargin ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextBlock_eventGetMargin_Parms, ReturnValue), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::NewProp_ReturnValue_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, nullptr, "GetMargin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::CommonTextBlock_eventGetMargin_Parms), Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_GetMargin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_GetMargin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics
	{
		struct CommonTextBlock_eventGetMobileFontSizeMultiplier_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextBlock_eventGetMobileFontSizeMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text|Mobile" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, nullptr, "GetMobileFontSizeMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics::CommonTextBlock_eventGetMobileFontSizeMultiplier_Parms), Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text|Scroll Style" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, nullptr, "ResetScrollState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_ResetScrollState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics
	{
		struct CommonTextBlock_eventSetLineHeightPercentage_Parms
		{
			float InLineHeightPercentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLineHeightPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics::NewProp_InLineHeightPercentage = { "InLineHeightPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextBlock_eventSetLineHeightPercentage_Parms, InLineHeightPercentage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics::NewProp_InLineHeightPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, nullptr, "SetLineHeightPercentage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics::CommonTextBlock_eventSetLineHeightPercentage_Parms), Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics
	{
		struct CommonTextBlock_eventSetMargin_Parms
		{
			FMargin InMargin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMargin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::NewProp_InMargin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::NewProp_InMargin = { "InMargin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextBlock_eventSetMargin_Parms, InMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::NewProp_InMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::NewProp_InMargin_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::NewProp_InMargin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, nullptr, "SetMargin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::CommonTextBlock_eventSetMargin_Parms), Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_SetMargin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_SetMargin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics
	{
		struct CommonTextBlock_eventSetMobileFontSizeMultiplier_Parms
		{
			float InMobileFontSizeMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMobileFontSizeMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics::NewProp_InMobileFontSizeMultiplier = { "InMobileFontSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextBlock_eventSetMobileFontSizeMultiplier_Parms, InMobileFontSizeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics::NewProp_InMobileFontSizeMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text|Mobile" },
		{ "Comment", "/** Sets the new value and then applies the FontSizeMultiplier */" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "Sets the new value and then applies the FontSizeMultiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, nullptr, "SetMobileFontSizeMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics::CommonTextBlock_eventSetMobileFontSizeMultiplier_Parms), Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics
	{
		struct CommonTextBlock_eventSetScrollingEnabled_Parms
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
	void Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled_SetBit(void* Obj)
	{
		((CommonTextBlock_eventSetScrollingEnabled_Parms*)Obj)->bInIsScrollingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled = { "bInIsScrollingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonTextBlock_eventSetScrollingEnabled_Parms), &Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::NewProp_bInIsScrollingEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text|Scroll Style" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, nullptr, "SetScrollingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::CommonTextBlock_eventSetScrollingEnabled_Parms), Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics
	{
		struct CommonTextBlock_eventSetStyle_Parms
		{
			TSubclassOf<UCommonTextStyle>  InStyle;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::NewProp_InStyle = { "InStyle", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextBlock_eventSetStyle_Parms, InStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::NewProp_InStyle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, nullptr, "SetStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::CommonTextBlock_eventSetStyle_Parms), Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_SetStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics
	{
		struct CommonTextBlock_eventSetTextCase_Parms
		{
			bool bUseAllCaps;
		};
		static void NewProp_bUseAllCaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAllCaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::NewProp_bUseAllCaps_SetBit(void* Obj)
	{
		((CommonTextBlock_eventSetTextCase_Parms*)Obj)->bUseAllCaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::NewProp_bUseAllCaps = { "bUseAllCaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonTextBlock_eventSetTextCase_Parms), &Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::NewProp_bUseAllCaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::NewProp_bUseAllCaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, nullptr, "SetTextCase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::CommonTextBlock_eventSetTextCase_Parms), Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_SetTextCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics
	{
		struct CommonTextBlock_eventSetWrapTextWidth_Parms
		{
			int32 InWrapTextAt;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InWrapTextAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::NewProp_InWrapTextAt = { "InWrapTextAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTextBlock_eventSetWrapTextWidth_Parms, InWrapTextAt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::NewProp_InWrapTextAt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Text" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, nullptr, "SetWrapTextWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::CommonTextBlock_eventSetWrapTextWidth_Parms), Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonTextBlock);
	UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister()
	{
		return UCommonTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UCommonTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileFontSizeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MobileFontSizeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ScrollStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleSheet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StyleSheet;
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
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStyleNoLongerNeedsConversion_MetaData[];
#endif
		static void NewProp_bStyleNoLongerNeedsConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStyleNoLongerNeedsConversion;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonTextBlock_GetMargin, "GetMargin" }, // 841740597
		{ &Z_Construct_UFunction_UCommonTextBlock_GetMobileFontSizeMultiplier, "GetMobileFontSizeMultiplier" }, // 831848405
		{ &Z_Construct_UFunction_UCommonTextBlock_ResetScrollState, "ResetScrollState" }, // 3923686068
		{ &Z_Construct_UFunction_UCommonTextBlock_SetLineHeightPercentage, "SetLineHeightPercentage" }, // 4054397780
		{ &Z_Construct_UFunction_UCommonTextBlock_SetMargin, "SetMargin" }, // 2449774291
		{ &Z_Construct_UFunction_UCommonTextBlock_SetMobileFontSizeMultiplier, "SetMobileFontSizeMultiplier" }, // 269523947
		{ &Z_Construct_UFunction_UCommonTextBlock_SetScrollingEnabled, "SetScrollingEnabled" }, // 2242033254
		{ &Z_Construct_UFunction_UCommonTextBlock_SetStyle, "SetStyle" }, // 2255363702
		{ &Z_Construct_UFunction_UCommonTextBlock_SetTextCase, "SetTextCase" }, // 142733425
		{ &Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth, "SetWrapTextWidth" }, // 1921606208
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::Class_MetaDataParams[] = {
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "Comment", "/**\n * Text block with automatic scrolling for FX / large texts, also supports a larger set of default styling, & custom mobile scaling.\n */" },
		{ "DisplayName", "Common Text" },
		{ "IncludePath", "CommonTextBlock.h" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "PrioritizeCategories", "Content" },
		{ "ToolTip", "Text block with automatic scrolling for FX / large texts, also supports a larger set of default styling, & custom mobile scaling." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_MobileFontSizeMultiplier_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Mobile font size multiplier. Activated by default on mobile. See CVar Mobile_PreviewFontSize */" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "Mobile font size multiplier. Activated by default on mobile. See CVar Mobile_PreviewFontSize" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_MobileFontSizeMultiplier = { "MobileFontSizeMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UCommonTextBlock::SetMobileFontSizeMultiplier_WrapperImpl, &UCommonTextBlock::GetMobileFontSizeMultiplier_WrapperImpl, STRUCT_OFFSET(UCommonTextBlock, MobileFontSizeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_MobileFontSizeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_MobileFontSizeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_Style_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonText" },
		{ "Comment", "/** References the text style to use */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "References the text style to use" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0045000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextBlock, Style), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_ScrollStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonText" },
		{ "Comment", "/** References the scroll style asset to use, no reference disables scrolling*/" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "References the scroll style asset to use, no reference disables scrolling" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_ScrollStyle = { "ScrollStyle", nullptr, (EPropertyFlags)0x0045000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextBlock, ScrollStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextScrollStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_ScrollStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_ScrollStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_StyleSheet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonText" },
		{ "Comment", "/** Prototype: Do not use! */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "Prototype: Do not use!" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_StyleSheet = { "StyleSheet", nullptr, (EPropertyFlags)0x0045040000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTextBlock, StyleSheet), Z_Construct_UClass_UCommonStyleSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_StyleSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_StyleSheet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bIsScrollingEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonText" },
		{ "Comment", "/** If scrolling is enabled/disabled initially, this can be updated in blueprint */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "If scrolling is enabled/disabled initially, this can be updated in blueprint" },
	};
#endif
	void Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bIsScrollingEnabled_SetBit(void* Obj)
	{
		((UCommonTextBlock*)Obj)->bIsScrollingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bIsScrollingEnabled = { "bIsScrollingEnabled", nullptr, (EPropertyFlags)0x0041000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonTextBlock), &Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bIsScrollingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bIsScrollingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bIsScrollingEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData[] = {
		{ "Comment", "/** True to always display text in ALL CAPS */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bDisplayAllCaps is deprecated. Please use TextTransformPolicy instead." },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "True to always display text in ALL CAPS" },
	};
#endif
	void Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps_SetBit(void* Obj)
	{
		((UCommonTextBlock*)Obj)->bDisplayAllCaps_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps = { "bDisplayAllCaps", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonTextBlock), &Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonText" },
		{ "Comment", "/** True to automatically collapse this text block when set to display an empty string. Conversely, will be SelfHitTestInvisible when showing a non-empty string. */" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "True to automatically collapse this text block when set to display an empty string. Conversely, will be SelfHitTestInvisible when showing a non-empty string." },
	};
#endif
	void Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_SetBit(void* Obj)
	{
		((UCommonTextBlock*)Obj)->bAutoCollapseWithEmptyText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText = { "bAutoCollapseWithEmptyText", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonTextBlock), &Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData[] = {
		{ "Comment", "/** Used to track widgets that were created before changing the default style pointer to null */" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
		{ "ToolTip", "Used to track widgets that were created before changing the default style pointer to null" },
	};
#endif
	void Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bStyleNoLongerNeedsConversion_SetBit(void* Obj)
	{
		((UCommonTextBlock*)Obj)->bStyleNoLongerNeedsConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bStyleNoLongerNeedsConversion = { "bStyleNoLongerNeedsConversion", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonTextBlock), &Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bStyleNoLongerNeedsConversion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonTextBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_MobileFontSizeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_ScrollStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_StyleSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bIsScrollingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bStyleNoLongerNeedsConversion,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonTextBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonTextBlock_Statics::ClassParams = {
		&UCommonTextBlock::StaticClass,
		"CommonUI",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonTextBlock()
	{
		if (!Z_Registration_Info_UClass_UCommonTextBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonTextBlock.OuterSingleton, Z_Construct_UClass_UCommonTextBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonTextBlock.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonTextBlock>()
	{
		return UCommonTextBlock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonTextBlock);
	UCommonTextBlock::~UCommonTextBlock() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonTextBlock)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonTextStyle, UCommonTextStyle::StaticClass, TEXT("UCommonTextStyle"), &Z_Registration_Info_UClass_UCommonTextStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonTextStyle), 1943960205U) },
		{ Z_Construct_UClass_UCommonTextScrollStyle, UCommonTextScrollStyle::StaticClass, TEXT("UCommonTextScrollStyle"), &Z_Registration_Info_UClass_UCommonTextScrollStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonTextScrollStyle), 2911096203U) },
		{ Z_Construct_UClass_UCommonTextBlock, UCommonTextBlock::StaticClass, TEXT("UCommonTextBlock"), &Z_Registration_Info_UClass_UCommonTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonTextBlock), 870671127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_2096164548(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
